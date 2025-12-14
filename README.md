# smart-garden-system
An ESP32-based IoT project that monitors soil moisture and automates watering to keep your plants healthy. Easy to set up, customizable, and perfect for smart gardening enthusiasts.
This project demonstrates an embedded system for an automated garden irrigation setup using an ESP32 microcontroller. The system monitors soil moisture levels and controls a water pump automatically to maintain optimal conditions for plant growth. Real-time feedback is provided through LED indicators and an I2C LCD display.

Features

Soil moisture monitoring using an analog input (simulated with a potentiometer)
Automatic water pump control based on moisture threshold
LED indicators for dry and wet soil conditions
Real-time display of soil moisture values on an I2C LCD
Manual user interaction through a push button

Hardware / Simulation Components
ESP32 Development Board
Potentiometer (simulated soil moisture sensor)
LEDs for pump and status indication
Push button for user input
16×2 I2C LCD display
Current-limiting resistors

This project is implemented and tested using the Wokwi online simulation platform.

System Logic
The ESP32 reads an analog value representing soil moisture.
The value is compared with a predefined threshold.
If the soil is dry, the water pump is activated.
If the soil is sufficiently wet, the pump is turned off.
System status and moisture values are displayed on the LCD and indicated using LEDs.

Simulation

https://wokwi.com/projects/450290022146642945

The potentiometer can be adjusted to simulate dry and wet soil conditions.

Technologies Used

Embedded C using the Arduino framework
ESP32 GPIO and ADC
I2C communication
LiquidCrystal_I2C library
