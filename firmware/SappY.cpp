#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1327.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME680.h>
#include <MPU6050.h>
#include <esp32/adc.h>
#include <TouchPad.h>

// ==================== PIN DEFINITIONS ====================
#define OLED_SDA 4
#define OLED_SCL 5
#define TOUCH_PIN 7
#define MPU_INT_PIN 11
#define POWER_LBO_PIN 13

// MAX98357 is skipped (no audio for now)

// ==================== OLED SETUP ========================
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 128
Adafruit_SSD1327 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// ==================== BME680 SETUP =====================
Adafruit_BME680 bme; 

// ==================== MPU6050 SETUP ====================
MPU6050 mpu;
int16_t ax, ay, az;
int16_t gx, gy, gz;

// ==================== TIMING ===========================
unsigned long lastBMERead = 0;
unsigned long bmeInterval = 3000; // 3s
unsigned long lastMPURead = 0;
unsigned long mpuInterval = 100;  // 100ms
unsigned long oledTimer = 0;
unsigned long oledTimeout = 5000; // 5s

bool oledOn = false;

// ==================== THRESHOLDS =======================
float shakeThreshold = 1.5; // g, light shake = annoyed
float intenseShakeThreshold = 3.0; // g, heavy shake = angry

// ==================== TOUCH ===========================
int touchCount = 0;
unsigned long lastTouch = 0;
unsigned long touchDebounce = 300;

// ==================== BATTERY =========================
bool lowBattery = false;
bool fullBattery = false;

// ==================== FUNCTION DECLARATIONS ===========
void showHappy();
void showCute();
void showHungry();
void showFull();
void showSad();
void showAnnoyed();
void showAngry();
void showNeutral();
void showEmbarrassed();
void showSurprised();
void showExpression(const char* expr);
void showBMEData();

// ==================== SETUP ===========================
void setup() {
  Serial.begin(115200);
  Wire.begin(OLED_SDA, OLED_SCL);

  // OLED INIT
  if(!display.begin(SSD1327_I2C_ADDRESS, OLED_SDA, OLED_SCL)) {
    Serial.println("SSD1327 allocation failed");
    while(1);
  }
  display.clearDisplay();
  display.display();

  // BME680 INIT
  if(!bme.begin()) {
    Serial.println("Could not find BME680 sensor!");
    while(1);
  }
  bme.setTemperatureOversampling(BME680_OS_8X);
  bme.setHumidityOversampling(BME680_OS_2X);
  bme.setPressureOversampling(BME680_OS_4X);
  bme.setGasHeater(320, 150); // 320°C for 150 ms

  // MPU6050 INIT
  mpu.initialize();
  if(!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed");
    while(1);
  }

  pinMode(TOUCH_PIN, INPUT);
  pinMode(POWER_LBO_PIN, INPUT);

  oledOn = false;
}

// ==================== LOOP ============================
void loop() {
  unsigned long now = millis();

  // ================= TOUCH SENSOR ====================
  if(touchRead(TOUCH_PIN) < 40) { // sensitive touch
    if(now - lastTouch > touchDebounce) {
      touchCount++;
      lastTouch = now;

      if(!oledOn) {
        oledOn = true;
        showNeutral();
        oledTimer = now;
      } else {
        if(touchCount == 3) {
          showBMEData(); // triple touch shows BME
          touchCount = 0;
          oledTimer = now;
        } else {
          showHappy(); // single touch while on → happy
          oledTimer = now;
        }
      }
    }
  }

  // ================= BATTERY =========================
  int lboState = digitalRead(POWER_LBO_PIN);
  if(lboState == LOW) lowBattery = true; // low
  else lowBattery = false; // okay
  // Full battery is assumed from charging module (could add voltage monitoring)

  // ================= BME680 =========================
  if(now - lastBMERead > bmeInterval) {
    lastBMERead = now;
    bme.performReading();
    float airQuality = bme.gas_resistance / 1000.0; // simplified

    Serial.print("BME680 Gas Resistance: "); Serial.println(airQuality);
    Serial.print("Temp: "); Serial.println(bme.temperature);
    Serial.print("Humidity: "); Serial.println(bme.humidity);

    if(airQuality > 500) showHappy();
    else if(airQuality > 400) showCute();
    else if(airQuality > 300) showNeutral();
    else if(airQuality > 200) showEmbarrassed();
    else if(airQuality > 100) showSad();
    else showAngry();

    oledTimer = now;
  }

  // ================= MPU6050 =========================
  if(now - lastMPURead > mpuInterval) {
    lastMPURead = now;
    mpu.getAcceleration(&ax, &ay, &az);
    float totalAcc = sqrt(pow(ax/16384.0,2) + pow(ay/16384.0,2) + pow(az/16384.0,2));

    if(totalAcc > intenseShakeThreshold) {
      showAngry();
      oledTimer = now;
    } else if(totalAcc > shakeThreshold) {
      showAnnoyed();
      oledTimer = now;
    }

    Serial.print("Accel G: "); Serial.println(totalAcc);
  }

  // ================= OLED SLEEP ======================
  if(oledOn && (now - oledTimer > oledTimeout)) {
    display.clearDisplay();
    display.display();
    oledOn = false;
  }

  // ================= BATTERY MOOD ====================
  if(lowBattery && oledOn) showHungry();
  // if fullBattery && oledOn showFull(); (can implement if needed)
}

// ==================== EXPRESSIONS =====================
void showExpression(const char* expr) {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1327_WHITE);
  display.setCursor(0,0);
  display.println(expr);
  display.display();
}

void showHappy()        { showExpression(":-) HAPPY"); }
void showCute()         { showExpression("^-^ CUTE"); }
void showHungry()       { showExpression(":o HUNGRY"); }
void showFull()         { showExpression(":D FULL"); }
void showSad()          { showExpression(":-| SAD"); }
void showAnnoyed()      { showExpression(":-/ ANNOYED"); }
void showAngry()        { showExpression(">:( ANGRY"); }
void showNeutral()      { showExpression(":-| NEUTRAL"); }
void showEmbarrassed()  { showExpression(":/ EMBARRASSED"); }
void showSurprised()    { showExpression(":O SURPRISED"); }

void showBMEData() {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1327_WHITE);
  display.setCursor(0,0);
  display.println("BME680 DATA:");
  display.print("Temp: "); display.println(bme.temperature);
  display.print("Hum: "); display.println(bme.humidity);
  display.print("Gas: "); display.println(bme.gas_resistance / 1000.0);
  display.display();
}

