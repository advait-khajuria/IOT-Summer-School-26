# DC Motor Speed Control with L298N

## Objective
Control the speed and direction of a DC motor using an L298N motor driver.

## Components
- Arduino UNO
- L298N Motor Driver
- DC Motor
- Potentiometer
- 2 Push Buttons

## Connections

ENA -> D9 (PWM)

IN1 -> D8

IN2 -> D7

Potentiometer -> A0

Direction Button -> D2

Start/Stop Button -> D3

## Features

- Potentiometer controls motor speed (0–100%)
- Direction button toggles Forward/Reverse
- Start/Stop button toggles motor operation
- Serial Monitor displays direction, speed and current state
