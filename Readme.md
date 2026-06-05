# Air Pollution Monitoring Device

## Overview

Developed an IoT-based Air Quality Monitoring System using NodeMCU (ESP8266) and MQ135 sensor to monitor environmental pollution levels in real time. The system detects harmful gases and provides alerts when air quality exceeds safe limits.

## Features

* Real-time air quality monitoring
* Detection of CO₂, NH₃, Benzene, Smoke, and other harmful gases
* Air quality measurement in PPM (Parts Per Million)
* LCD display for local monitoring
* LED and buzzer alerts for hazardous conditions
* Cloud-based monitoring using ThingSpeak
* Wi-Fi enabled remote access

## Technologies Used

* Arduino IDE
* NodeMCU (ESP8266)
* MQ135 Gas Sensor
* I2C LCD Display
* ThingSpeak
* IoT

## Hardware Components

* NodeMCU (ESP8266)
* MQ135 Gas Sensor
* I2C LCD Display
* LEDs
* Buzzer
* Resistors

## Working

The MQ135 sensor continuously monitors air quality and detects harmful gases present in the environment. The NodeMCU processes the sensor data, converts it into PPM values, displays the readings on an LCD screen, and uploads the data to ThingSpeak for remote monitoring. Alerts are triggered through LEDs and a buzzer when pollution levels exceed predefined thresholds.

## Results

* Fresh Air: Below 350 PPM
* Warning Level: Above 400 PPM
* Critical Level: Above 800 PPM

## Documentation

The complete project report is available in the repository as **Project_Report.pdf**.

## Project Images

Project images and screenshots are available in the **images** folder.

## Author

Chiranjeevi Velpula
