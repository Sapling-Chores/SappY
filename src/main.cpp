// I will do something else after I complete this project.
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <Adafruit_MPU6050.h>
#include <RTCLib.h>

#define screenWidth 128
#define screenHeight 64

Adafruit_SSD1306 display(screenWidth , screenHeight , &Wire, -1);
Adafruit_MPU6050 accelerometer;
RTC_DS1307 rtc;

const int SDAPin = 21;
const int SCLPin = 22;
const int temPin = 14;


void setup(){
    Serial.begin(15200);
    Wire.begin(SDAPin, SCLPin);
    while (!display.begin(SSD1306_SWITCHCAPVCC, 0X3C)){
        Serial.println("Display not connected");
    }
    Serial.println("Display Connected");
    while (!accelerometer.begin()){
        Serial.println("Accelerometer Not connected !");
    }
    Serial.print("Accelerometer Connwected");
    while (!rtc.begin()){
        Serial.print("RTC not connected");
    }
    Serial.print("RTC connected");
    

}
void loop(){
    
}
