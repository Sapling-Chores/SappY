



<div align = "center">
 <h1> SappY </h1>
 <img width="3780" height="1890" alt="sappY" src="https://github.com/user-attachments/assets/36794752-4bd7-4c01-8163-e2ad1c8bd00d" />

 



## What is it?

SappY is a desk robot which uses Esp32 and oled to show animations(i.e. Facial expression). And reacts using multiple sensors. It also has sounds that makes it more lively.

## Features: 

* It uses esp32-S3 to control sensors and oleds.
* It uses MPU 6050 to detect shakkes and motions and react accordingly usig Oled and Sound ( sound- not added yet) .
* It has a BME 680 to measure air quality of the room the robot is in.
* It uses 3.7 V LiPo battery with a charging module Adafruit Power Boost 1000c
  
### Future features:
* I will be connecting it to a website or an app that will control its features and would let you add/delete more animations and audio files.
* The website would also fetch data from aqicn.org to give the measure of the Aqi of the city user has set on in the website.

## Why I made this project?

I study all day on my pc sitting on my desk, so I wanted something that would push my limits and also give me a bit of company. 
Also since I live in city with AQI level more than 130, I am always concerned about AQI of my room and my surrounding, So I made this project that I would not have to go and check AQI everytime on my phone/pc.


## Schematic:
<img width="834" height="707" alt="{B289544C-C3AA-4791-81CF-BF32BAAD35E2}" src="https://github.com/user-attachments/assets/3e6bd14c-47bf-4f72-80a9-6209df2b2ebd" />

## PCB:

<img width="359" height="672" alt="{30170945-8224-4E72-8F75-48E06082DE6B}" src="https://github.com/user-attachments/assets/9aab7be8-710a-4baa-af33-e7ae88c7c5c1" />

<img width="1266" height="718" alt="{1A8B3450-A7B9-47D3-8503-5E0AE0A452B6}" src="https://github.com/user-attachments/assets/9efc4393-34f8-4d97-82ee-fb731c52ed3a" />

## Cad 

### Components:

<img width="1546" height="809" alt="{716C02FA-BC88-47AB-9681-6F992920E0AC}" src="https://github.com/user-attachments/assets/e7116768-ab0e-4a92-aa8d-860bd91373a4" />


### Bottom: 

<img width="1538" height="787" alt="{1BD2B336-AB10-444F-899E-7B1D4743CCFB}" src="https://github.com/user-attachments/assets/1de8b901-8256-4240-9921-7c2b0ab55e25" />

### Top:

<img width="1442" height="828" alt="{D3C11C85-9C5B-482B-B236-84D17BC4994D}" src="https://github.com/user-attachments/assets/8f89d897-7b99-4035-a23b-3b10fee04825" />

### Assembly:
<img width="1346" height="793" alt="{6FFF0953-8126-429E-9E3E-CD39CB8BD592}" src="https://github.com/user-attachments/assets/6cae8e95-8323-44d8-9e68-d00ed75966e8" />




### links:
1. https://www.digikey.in/en/products/detail/espressif-systems/ESP32-S3-DEVKITC-1-N8R8/15295894?gclsrc=aw.ds&gad_source=1&gad_campaignid=23291913534&gbraid=0AAAAADrbLlj2MbTWqjcPRwcsMOZKvIy95&gclid=Cj0KCQiAvtzLBhCPARIsALwhxdpJrjQKiFk-O_-rFIuPle6xD8GMGrvYUBQbyBa9Iw4IUABeMZXCf2kaAqefEALw_wcB

2. https://robokits.co.in/sensors/sound/max98357-i2s-3w-class-d-amplifier-interface-audio-decoder-module-filterless-board-for-raspberry-pi-esp32?srsltid=AfmBOoqgoxty2nGPPdMViI0u4GsDUey74bt8LqZHfa_z-1VyQYjiNUvc
3. https://robu.in/product/adafruit-powerboost-1000-charger-rechargeable-5v-lipo-usb-boost-1a-1000c/
4. https://www.amazon.in/Robocraze-MPU-6050-Gyroscope-Accelerometer-Arduino/dp/B07H3XH1TB/ref=sr_1_1?dib=eyJ2IjoiMSJ9.5iuyhdJ2V22JDaYKg2aEgRrWx0qj4SYyh4cCZxOZFrtB4-ld4eMzk6PC7WNAme3Cs4vWJmE-MDAQQZOSwk3CLTK_OPezZOGLi5jnwERryblX_azJwC2ZNhYJca3_gzVlkwOZ8p6bF2gBbvqw9G7Mhcb1C60c0xjA5Q2EetG73C6abXEd0uUJb-Aptef3vF8sJH-AczducFovkXAFpioYa72SN871DwYMdps8n6HhzoQ4UlaUNhA8UDuTvCMbM7cMh7FDSs2pEV-YiNYnH66xdokdOiDP2LpoNmqi0ZhX2Fk.v3YriilME6-nZz-P1dmDCpchQsUe1IDUGNhLfGp4cqQ&dib_tag=se&keywords=mpu6050&qid=1769469429&sr=8-1
5. https://robu.in/product/bme680-digital-temperature-humidity-pressure-sensor-cjmcu-680-high-altitude-sensor-module-development-board/
6. https://www.digikey.in/en/products/detail/same-sky-formerly-cui-devices-/SLW-883935-2A-D/21259966?gclsrc=aw.ds&gad_source=1&gad_campaignid=23301206764&gbraid=0AAAAADrbLlgNQpF9PA5IO9LraIBOVLQUy&gclid=Cj0KCQiAvtzLBhCPARIsALwhxdqmE0ukPPqwWIWmDeIgc0GmUqvppiBpVVl7xABMWCDhwBUVgKycA1YaAp3gEALw_wcB
7. https://robu.in/product/wly803040-1000mah-3-7v-single-cell-rechargeable-lipo-battery/
8. https://www.digikey.in/en/products/detail/adafruit-industries-llc/4741/13426655
9. https://www.digikey.in/en/products/detail/adafruit-industries-llc/4227/10245140?gclsrc=aw.ds&gad_source=1&gad_campaignid=23301206764&gbraid=0AAAAADrbLlgNQpF9PA5IO9LraIBOVLQUy&gclid=Cj0KCQiAvtzLBhCPARIsALwhxdo5NOQk0d5d-bxQsyU4HiK5YT5YohLkg7dRkD488M7-QSo3nDrj0IoaAmF6EALw_wcB

# Bom

<img width="1919" height="871" alt="{D192BDBE-2782-4A68-946D-F2498D75AB06}" src="https://github.com/user-attachments/assets/53adf0f0-489c-4a5b-be55-9c0eef011604" />
<img width="1899" height="868" alt="{193A02FB-6133-459C-9D5D-0AF20C038FB2}" src="https://github.com/user-attachments/assets/f9ea2e95-3a08-4588-b4df-ad5b112ff4b8" />
<img width="1143" height="356" alt="{01FDA0E7-B2C7-4908-BD14-F368719536B3}" src="https://github.com/user-attachments/assets/991793f9-8903-47dc-972a-e95344a2861c" />
<img width="1279" height="186" alt="{80CB5649-66B4-44EE-A96F-3E8529F8921D}" src="https://github.com/user-attachments/assets/e4e76415-9294-4752-aefc-e02df7a907c4" />
<img width="1451" height="730" alt="{97EEB0D9-B3DE-442A-A1F8-8EE2DBFE58BD}" src="https://github.com/user-attachments/assets/e0491f7a-2283-4617-817a-120fecb192f3" />
<img width="1716" height="700" alt="{6FD3F44B-A4BA-45F2-BBF2-F8CDAFB6D78B}" src="https://github.com/user-attachments/assets/ee093ab2-4520-40ae-a6f3-b680463dc124" />
<img width="1902" height="796" alt="{CF2FEEF3-E7B0-4E17-973C-231A355BFCA4}" src="https://github.com/user-attachments/assets/acfafdfd-0d39-44b9-ba0d-799daa56179b" />
<img width="1902" height="721" alt="{D78C6B45-F904-4817-9036-1DE75751EE18}" src="https://github.com/user-attachments/assets/f9ed6239-2c2e-4fee-a607-40955ce0b8f5" />
<img width="1900" height="805" alt="{7732F5F5-A3F0-4F25-85FD-BAC5CD64A5F6}" src="https://github.com/user-attachments/assets/ad002024-b6fb-4835-a5c8-6f6e162ecdde" />
<img width="1898" height="870" alt="{7AFEB986-1088-4990-AD03-5F15DF1776FF}" src="https://github.com/user-attachments/assets/a84c9089-c1f5-40b1-b6a0-c49a9e90993e" />

Total:
<img width="1859" height="859" alt="{4E059632-A869-4819-9D67-191C68E75BA4}" src="https://github.com/user-attachments/assets/6aa242d1-a3b3-4333-bf10-889fdb48dce1" />










</div>

