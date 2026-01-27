



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


# BOM:
| Item | Part Name                 | Supplier  | Qty | Unit Price (INR) | Unit Price (USD) | Link |
|------|---------------------------|----------|-----|-----------------|-----------------|------|
| 1    | Adafruit OLED 128x128     | DigiKey  | 1   | 1991            | 21.71           | [Link](https://www.digikey.in/en/products/detail/adafruit-industries-llc/4741/13426655) |
| 2    | Slide Switch              | DigiKey  | 1   | 39.83           | 0.43            | [Link](https://www.digikey.in/en/products/detail/same-sky-formerly-cui-devices/SLW-883935-2A-D/21259966) |
| 3    | ESP32-S3 DevKitC-1-N8R8   | DigiKey  | 1   | 1327            | 14.47           | [Link](https://www.digikey.in/en/products/detail/espressif-systems/ESP32-S3-DEVKITC-1-N8R8/15295894) |
| 4    | Speaker 4227              | DigiKey  | 1   | 172.61          | 1.88            | [Link](https://www.digikey.in/en/products/detail/adafruit-industries-llc/4227/10245140) |
| 5    | MPU6050                   | Robocraze| 1   | 170             | 1.85            | [Link](https://robocraze.com/products/mpu-6050-triple-axis-accelerometer-gyroscope-module?variant=40192322011289) |
| 6    | BME680                    | Robocraze| 1   | 707             | 7.71            | [Link](https://robocraze.com/products/bme680-temperature-sensor-module?variant=40193794211993) |
| 7    | Adafruit PowerBoost 1000C | Robu     | 1   | 2916            | 31.79           | [Link](https://robu.in/product/adafruit-powerboost-1000-charger-rechargeable-5v-lipo-boost-1a-1000c/) |
| 8    | LiPo Battery 1000mAh      | Robu     | 1   | 377             | 4.11            | [Link](https://robu.in/product/wly803040-1000mah-3-7v-single-cell-rechargeable-lipo-battery/) |
| 9    | MAX98357 Audio Amp        | Robokits | 1   | 105             | 1.14            | [Link](https://robokits.co.in/sensors/sound/max98357-i2s-3w-class-d-amplifier-interface-audio-decoder-module-filterless-board-for-raspberry-pi-esp32?products_id=4261:13384ffc9d8bdb21c53c6f72d46f7866) |
| 10   | PCB                       | Custom   | 1   | 642.6           | 7               | N/A |
| 11   | Shipping DigiKey          | DigiKey  | 1   | 1200            | 13.08           | N/A |
| 12   | Shipping Robokits         | Robokits | 1   | 80              | 0.87            | N/A |
| 13   | Shipping PCB              | Custom   | 1   | 734.4           | 8               | N/A |
| 14   | 3D Printing Top           | Custom   | 1   | 244             | 2.66            | N/A |
| 15   | 3D Printing Bottom        | Custom   | 1   | 507             | 5.53            | N/A |
| 16   | 3D Printing Shipping      | Custom   | 1   | 49              | 0.54            | N/A |
| TOTAL |                           |          |     | 11352      | 122.47          |      |


# Checkouts

<img width="1840" height="771" alt="image" src="https://github.com/user-attachments/assets/fdacab2a-33bf-4ee8-96ec-39cdc04b95c8" />
<img width="1872" height="821" alt="image" src="https://github.com/user-attachments/assets/b926004e-2f13-4b1b-8ab5-ef28c4862f31" />
<img width="1859" height="859" alt="{4E059632-A869-4819-9D67-191C68E75BA4}" src="https://github.com/user-attachments/assets/6aa242d1-a3b3-4333-bf10-889fdb48dce1" />
<img width="1902" height="831" alt="{40D43D63-69AE-42D0-8E3B-638EB4089094}" src="https://github.com/user-attachments/assets/98ac64df-8587-40aa-a57b-473abc3d4a5e" />
<img width="1884" height="742" alt="{A45A1321-A4A5-4E42-B22F-7A50CFE48F27}" src="https://github.com/user-attachments/assets/0262cfb2-969e-4e9f-8067-ee8bc6edfd22" />
<img width="1858" height="835" alt="{3E645D69-860D-4EBB-9314-0817406C4AAD}" src="https://github.com/user-attachments/assets/4e89a04f-bf5f-4079-9d56-b582223cd2d7" />


### THIs project uses :

#### [EasyEda](https://easyeda.com/) for pcb and schematics
#### [Fusion 360](https://www.autodesk.com/in/products/fusion-360/overview) for 3d Design and Render
#### [HackClubBlueprint](https://blueprint.hackclub.com)

</div>

