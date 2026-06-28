# PWM Fading Night Light

## Objective
Create an automatic night light using PWM that fades an LED in and out. A push button is used to switch between three different lighting modes.

## Components Used
- Arduino UNO
- LED
- 220Ω Resistor
- Push Button
- Jumper Wires

## Connections
- LED Anode (+) → Pin 9 through 220Ω resistor
- LED Cathode (-) → GND
- Push Button → Pin 2 and GND (using INPUT_PULLUP)

## Features
- Mode 1: Slow Breathing Effect (3-second cycle)
- Mode 2: Fast Pulse (0.5-second cycle)
- Mode 3: SOS Pattern (... --- ...)
- Current mode is displayed on the Serial Monitor.
- Press the push button to switch between modes.

## Files
- pwm_fading_night_light.ino
- fading_light.png
- README.md

## Output
The LED changes brightness using PWM and cycles through three lighting modes whenever the push button is pressed.

---
**Author:** Advait Khajuria  
**Course:** IIT Jammu Summer School 2026 – IoT & Drone Automation
