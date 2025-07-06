# ArduinoCarRobot
An autonomous Arduino-based robot car that navigates using ultrasonic sensors for obstacle detection and avoidance. The robot features dual control modes: autonomous navigation with obstacle detection and manual remote control via IR sensor. Built on Arduino Uno R3 with a TB6612 motor driver for precise movement control.
 
## Hardware Requirements
To replicate this project, you will need the following components:
### Essential Components
 * Arduino Uno R3 - Main microcontroller
 * TB6612 1.2A Motor Driver - Dual motor control
 * 2x Small 6V DC Motors - Robot locomotion
 * 9V Battery + Battery Clip - Power supply
 * Robot Chassis Kit - [Adafruit 2WD Robot Chassis](https://www.adafruit.com/product/3244 "Link")
### Sensors
 * HC-SR04 Ultrasonic Sensor - For autonomous obstacle detection
 * IR Sensor Module with Remote - For manual remote control

## Software Requirements
 * Arduino IDE 2.1.0+
 * SparkFun Motor Driver - Dual TB6612FNG (1A) Library

## Installation and Setup
### Hardware Assembly
1. Mount Components: Assemble the robot chassis and mount the Arduino Uno R3
2. Motor Driver Connection: Connect the TB6612 motor driver to the Arduino following the wiring diagram
3. Motor Installation: Attach the two DC motors to the chassis and connect to the motor driver
4. Sensor Setup: Connect either the HC-SR04 ultrasonic sensor or IR sensor module based on desired mode
5. Power Connection: Connect the 9V battery clip to power the system

## Car Robot Photos
 
<img src = "https://user-images.githubusercontent.com/105401477/197431649-6671ec36-c827-445c-b22d-b5582cd0a003.jpg" width = 300 height = 400> <img src = "https://user-images.githubusercontent.com/105401477/197431650-067f2443-7b06-43cc-8835-8d2bd4c3e36e.jpg" width = 300 height = 400> <img src = "https://user-images.githubusercontent.com/105401477/197431652-3bf615c0-2adc-4741-b5c5-99323109e6f2.jpg" width = 300 height = 400>
<img src = "https://user-images.githubusercontent.com/105401477/207102767-516242e5-548a-4b72-8de1-2ec8c31aae21.jpg" width = 300 height = 400>

## Car Robot Videos
https://user-images.githubusercontent.com/105401477/197435650-f490adc6-1e36-407b-a55e-b210004618f4.mp4

https://user-images.githubusercontent.com/105401477/197435652-de349c7a-d32a-4181-b39c-f9b48545344d.mp4


