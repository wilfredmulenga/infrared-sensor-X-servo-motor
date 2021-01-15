# Infra-red Sensor X Servo Motor
Arduino-based project with the servo motor controlled by infra-red sensor. This project is to teach basic electronics with an [Arduino](https://www.arduino.cc/).

## List of components
1. Arduino
2. HC-SR501 Infra-red sensor
3. Servor motor
4. LEDs
5. Jumper wires

## Description
The HC-SR501 Infrared sensor will detect Infra-red changes and if interpreted as motion, will set its output low. What is or is not interpreted as motion is largely dependent on user settings and adjustments.The module features adjustable sensitivity that allows for a motion detection range from 3 meters to 7 meters. When motion is detected, we send a signal to rotate the servor motor to 90 degrees, turn on the red LED and turn off the green one. When no motion is detected, we rotate the servor motor to 180 degrees and turn on the green LED and turn off the red one.


