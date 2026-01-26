



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


### links:
1. https://www.digikey.in/en/products/detail/espressif-systems/ESP32-S3-DEVKITC-1-N8R8/15295894?gclsrc=aw.ds&gad_source=1&gad_campaignid=23291913534&gbraid=0AAAAADrbLlj2MbTWqjcPRwcsMOZKvIy95&gclid=Cj0KCQiAvtzLBhCPARIsALwhxdpJrjQKiFk-O_-rFIuPle6xD8GMGrvYUBQbyBa9Iw4IUABeMZXCf2kaAqefEALw_wcB

2. https://robokits.co.in/sensors/sound/max98357-i2s-3w-class-d-amplifier-interface-audio-decoder-module-filterless-board-for-raspberry-pi-esp32?srsltid=AfmBOoqgoxty2nGPPdMViI0u4GsDUey74bt8LqZHfa_z-1VyQYjiNUvc
3. https://robu.in/product/adafruit-powerboost-1000-charger-rechargeable-5v-lipo-usb-boost-1a-1000c/
4. https://www.amazon.in/Robocraze-MPU-6050-Gyroscope-Accelerometer-Arduino/dp/B07H3XH1TB/ref=sr_1_1?dib=eyJ2IjoiMSJ9.5iuyhdJ2V22JDaYKg2aEgRrWx0qj4SYyh4cCZxOZFrtB4-ld4eMzk6PC7WNAme3Cs4vWJmE-MDAQQZOSwk3CLTK_OPezZOGLi5jnwERryblX_azJwC2ZNhYJca3_gzVlkwOZ8p6bF2gBbvqw9G7Mhcb1C60c0xjA5Q2EetG73C6abXEd0uUJb-Aptef3vF8sJH-AczducFovkXAFpioYa72SN871DwYMdps8n6HhzoQ4UlaUNhA8UDuTvCMbM7cMh7FDSs2pEV-YiNYnH66xdokdOiDP2LpoNmqi0ZhX2Fk.v3YriilME6-nZz-P1dmDCpchQsUe1IDUGNhLfGp4cqQ&dib_tag=se&keywords=mpu6050&qid=1769469429&sr=8-1
5. https://robu.in/product/bme680-digital-temperature-humidity-pressure-sensor-cjmcu-680-high-altitude-sensor-module-development-board/
6. https://www.digikey.in/en/products/detail/same-sky-formerly-cui-devices-/SLW-883935-2A-D/21259966?gclsrc=aw.ds&gad_source=1&gad_campaignid=23301206764&gbraid=0AAAAADrbLlgNQpF9PA5IO9LraIBOVLQUy&gclid=Cj0KCQiAvtzLBhCPARIsALwhxdqmE0ukPPqwWIWmDeIgc0GmUqvppiBpVVl7xABMWCDhwBUVgKycA1YaAp3gEALw_wcB
# Bom

<img width="1919" height="870" alt="{99DD8B30-EA63-4ADF-910A-D8F5C2E419FF}" src="https://github.com/user-attachments/assets/c6f925c2-0f30-4e3e-bcf9-f9053021ec80" />
<img width="1899" height="868" alt="{193A02FB-6133-459C-9D5D-0AF20C038FB2}" src="https://github.com/user-attachments/assets/f9ea2e95-3a08-4588-b4df-ad5b112ff4b8" />
<img width="1143" height="356" alt="{01FDA0E7-B2C7-4908-BD14-F368719536B3}" src="https://github.com/user-attachments/assets/991793f9-8903-47dc-972a-e95344a2861c" />
<img width="1279" height="186" alt="{80CB5649-66B4-44EE-A96F-3E8529F8921D}" src="https://github.com/user-attachments/assets/e4e76415-9294-4752-aefc-e02df7a907c4" />
<img width="1451" height="730" alt="{97EEB0D9-B3DE-442A-A1F8-8EE2DBFE58BD}" src="https://github.com/user-attachments/assets/e0491f7a-2283-4617-817a-120fecb192f3" />
<img width="1716" height="700" alt="{6FD3F44B-A4BA-45F2-BBF2-F8CDAFB6D78B}" src="https://github.com/user-attachments/assets/ee093ab2-4520-40ae-a6f3-b680463dc124" />
<img width="1902" height="796" alt="{CF2FEEF3-E7B0-4E17-973C-231A355BFCA4}" src="https://github.com/user-attachments/assets/acfafdfd-0d39-44b9-ba0d-799daa56179b" />
<img width="1902" height="721" alt="{D78C6B45-F904-4817-9036-1DE75751EE18}" src="https://github.com/user-attachments/assets/f9ed6239-2c2e-4fee-a607-40955ce0b8f5" />








</div>

