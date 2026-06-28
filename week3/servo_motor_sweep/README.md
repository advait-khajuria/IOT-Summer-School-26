# Servo Motor Sweep

## Objective
Control an SG90 servo motor using a potentiometer and perform a full sweep when a push button is pressed.

## Components
- Arduino UNO
- SG90 Servo Motor
- Potentiometer (10kΩ)
- Push Button

## Connections

Servo Signal -> D9

Potentiometer Middle Pin -> A0

Push Button -> D2 and GND

## Features

- Potentiometer controls servo angle (0°–180°)
- Current angle displayed on Serial Monitor
- Button press performs one complete sweep (0°→180°→0°)
