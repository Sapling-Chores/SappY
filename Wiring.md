## Hardware Connections

| Component                   | Pin / Connection          | ESP32 Pin / Voltage |
|------------------------------|-------------------------|------------------|
| **ESP32-S3**                | SCL                     | GPIO 5           |
|                              | SDA                     | GPIO 4           |
| **1.5" 128x128 Grayscale OLED** | SDA                     | SCL (GPIO 5)     |
|                              | SCL                     | SDA (GPIO 4)     |
|                              | VIN                     | 3.3V             |
|                              | GND                     | GND              |
| **Adafruit PowerBoost 1000C** | LBO                     | GPIO 13          |
|                              | GND                     | GND              |
|                              | 5V                      | 5V               |
| **Touch Sensor**             | -                       | GPIO 7           |
| **MAX98357 (I2S Audio, optional)** | LRCLK                  | GPIO 14          |
|                              | BCLK                    | GPIO 10          |
|                              | DIN                     | GPIO 9           |
|                              | GAIN                    | Floating         |
|                              | SD                      | GND              |
|                              | VCC                     | 3.3V             |
| **BME680 (Air Quality Sensor)** | VCC                     | 3.3V             |
|                              | GND                     | GND              |
|                              | SCL                     | SCL (GPIO 5)     |
|                              | SDA                     | SDA (GPIO 4)     |
| **MPU6050 (Motion Sensor)**  | VCC                     | 3.3V             |
|                              | GND                     | GND              |
|                              | SCL                     | SCL (GPIO 5)     |
|                              | SDA                     | SDA (GPIO 4)     |
|                              | AD0                     | GND              |
|                              | INT                     | GPIO 11          |
|                              | XDA                     | Floating         |
|                              | XCL                     | Floating         |
