# Environmental Monitoring Station (TMP36 Simulation)

## Objective
Build an environmental monitoring system that reads temperature every 2 seconds, displays the readings on the Serial Monitor in CSV format, and indicates abnormal conditions using LEDs.

## Note
The original assignment requires a DHT11 sensor. Since DHT11 is not available in Tinkercad, a TMP36 temperature sensor was used for simulation. Humidity values are generated in software to demonstrate the required functionality.

## Components Used
- Arduino UNO
- TMP36 Temperature Sensor
- Red LED
- Green LED
- 2 × 220Ω Resistors
- Jumper Wires

## Circuit Connections

### TMP36
- Left Pin → 5V
- Middle Pin → A0
- Right Pin → GND

### LEDs
- Red LED → Pin 8 (through 220Ω resistor)
- Green LED → Pin 9 (through 220Ω resistor)

## Features
- Reads temperature every 2 seconds
- Converts temperature to Celsius and Fahrenheit
- Simulates humidity values
- Prints readings in CSV format
- Red LED turns ON if:
  - Temperature > 35°C, or
  - Humidity > 80%
- Green LED indicates normal conditions

## Sample Output

Timestamp,Temp_C,Temp_F,Humidity

2000,27.4,81.3,58

4000,28.1,82.6,63

6000,29.0,84.2,60

8000,36.5,97.7,82

10000,31.2,88.2,70

## Folder Structure

week3/
├── environmental_monitor/
│   ├── environmental_monitor.ino
│   └── README.md
├── data/
│   └── sample_readings.csv
└── schematics/
    └── environmental_monitor.png

## Author
Advait Khajuria

IIT Jammu Summer School 2026
