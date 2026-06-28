# Relay Controlled AC Device Simulation

## Objective
Simulate a relay-controlled AC appliance using an LED.

## Components
- Arduino UNO
- TMP36 Temperature Sensor
- LED
- Push Button
- 220Ω Resistor

## Note
TMP36 is used instead of DHT11 because DHT11 is not available in Tinkercad.

## Connections

TMP36 -> A0

LED -> D8

Push Button -> D2

## Features

- LED simulates an AC appliance
- Turns ON when temperature exceeds 32°C
- Turns OFF below 28°C (hysteresis)
- Manual override button forces the appliance ON
- Relay state and temperature displayed on Serial Monitor
