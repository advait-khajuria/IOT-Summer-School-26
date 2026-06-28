# Keypad + LCD Password Lock

## Objective

Create a password-protected access system using a 4x4 keypad and a 16x2 LCD.

## Components

- Arduino UNO
- 4x4 Membrane Keypad
- 16x2 LCD
- Red LED
- Buzzer

## Features

- LCD displays "ENTER PIN"
- User enters a 4-digit password
- Correct PIN (1234) displays "ACCESS GRANTED"
- Incorrect PIN displays "ACCESS DENIED"
- Red LED and buzzer indicate incorrect password
- System locks for 10 seconds after three consecutive incorrect attempts

## Libraries Used

- Keypad.h
- LiquidCrystal.h
