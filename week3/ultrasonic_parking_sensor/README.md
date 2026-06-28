# Ultrasonic Parking Sensor

## Objective
Measure the distance between an object and the sensor using the HC-SR04 and provide visual and audio alerts.

## Components
- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- Green LED
- Yellow LED
- Red LED
- Passive Buzzer
- 3 × 220Ω Resistors

## Connections

TRIG -> D9

ECHO -> D10

Green LED -> D2

Yellow LED -> D3

Red LED -> D4

Buzzer -> D5

## Working

Distance > 50 cm
- Green LED ON
- SAFE message

20–50 cm
- Yellow LED ON
- Buzzer beeps every 500 ms

10–20 cm
- Red LED ON
- Buzzer beeps every 200 ms

Distance < 10 cm
- All LEDs ON
- Continuous buzzer
- STOP message on Serial Monitor
