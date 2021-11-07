# Crash-Detection-UB-Hacking-2021
Detecting if a car is going to crash and warning the driver. Built for UB Hacking 2021. If a car is moving and there is something (human, car, animal, etc) within a dangerous distance, the system will warn the driver. 

## Purpose
- I was walking across a crosswalk and the car didn't stop. I had to dodge. 
- This system will provide a prototype to prevent drivers from hitting people or objects. Distracted driving is unfortunately a reality and this system will be able to get their attention so they can act accordingly. 

## Contributor List
- Yash Kelkar
- Jason Brown

## References
- For ultrasonic sensor: https://www.youtube.com/watch?v=ZejQOX69K5M&ab_channel=HowToMechatronics
- For vibrator: http://www.learningaboutelectronics.com/Articles/Vibration-motor-circuit.php

## Materials Used
- Arduino Uno
- Vibration Motor 
- Ultrasonic sensor

## Build It Yourself
- Vcc and Ground to Vcc and Ground rails of breadboard
- Pin 2 for ultrasonic sensor trig
- Pin 3 for ultrasonic sensor echo
- Ultrasonic sensor Vcc and Ground in the Vcc and ground rails of breadboard
- Pin 4 for vibration motor input
- Vibration motor ground to ground rail of breadboard

## Ideas for Improvement
- The current system is only used for monitoring the front of the car. However, changing lanes can also be dangerous. Sensors and motors can be added on each side of the vehicle to detect horizontal speed and distance from other objects and warn the driver in a similar manner.
- Get the buzzer and motor to actually work so that speed can be detected and it makes sound along along with vibrating.
