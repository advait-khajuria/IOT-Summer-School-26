# Smart Street Light

## Objective
Design an intelligent street light using an LDR and PIR sensor.

## Components
- Arduino UNO
- LDR
- PIR Motion Sensor
- LED
- 220Ω Resistor
- 10kΩ Resistor

## Connections

LDR -> A0

PIR OUT -> D2

LED -> D9

## Working

- During daytime, the LED remains OFF.
- At night, motion detection turns the LED ON at full brightness.
- If no motion is detected for 30 seconds, the LED dims to 20% brightness.
- Status messages are displayed on the Serial Monitor.
