# Multi-Sensor Data Logger

## Objective
Read multiple sensors simultaneously and display structured data on the Serial Monitor.

## Components
- Arduino UNO
- TMP36 Temperature Sensor
- LDR
- HC-SR04 Ultrasonic Sensor
- 10kΩ Resistor

## Note
DHT11 is not available in Tinkercad, so TMP36 was used for temperature measurement. Humidity values are simulated for demonstration.

## Connections

TMP36 -> A1

LDR -> A0

HC-SR04
- TRIG -> D9
- ECHO -> D10

## Features
- Reads temperature
- Simulates humidity
- Measures light intensity
- Measures distance
- Prints all sensor values every 5 seconds in a structured format

## Output Example

------ SENSOR LOG ------

Time : 10000 ms

Temp : 28.4 C | Humidity : 63%

Light : 71%

Distance : 42 cm
