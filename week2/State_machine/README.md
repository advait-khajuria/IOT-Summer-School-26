# State Machine Implementation

## Objective

Implement a vending machine state machine with four states using Arduino.

## Components

- Arduino UNO
- 3 LEDs
- 3 Push Buttons
- 220Ω Resistors
- Jumper Wires

## States

- IDLE
- COIN_INSERTED
- ITEM_SELECTED
- DISPENSING

## State Diagram

IDLE → COIN_INSERTED → ITEM_SELECTED → DISPENSING → IDLE

Cancel button returns the system to IDLE.

## Connections

- Red LED → Pin 13
- Yellow LED → Pin 12
- Green LED → Pin 11
- Coin Button → Pin 2
- Select Button → Pin 3
- Cancel Button → Pin 4

## Files

- state_machine.ino
- state_machine.png
- README.md

---

Author: Advait Khajuria

IIT Jammu Summer School 2026
