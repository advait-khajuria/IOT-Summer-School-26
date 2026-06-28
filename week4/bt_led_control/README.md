# Bluetooth LED Controller (HC-05)

## Objective

Control RGB LEDs wirelessly using an HC-05 Bluetooth module and an Android Bluetooth Terminal application.

## Components

- Arduino UNO
- HC-05 Bluetooth Module
- Red LED
- Green LED
- Blue LED
- 220Ω Resistors

## Bluetooth Commands

| Command | Action |
|---------|--------|
| R | Turn Red LED ON |
| G | Turn Green LED ON |
| B | Turn Blue LED ON |
| X | Turn OFF all LEDs |
| F | Flash all LEDs 5 times |

## HC-05 Pairing

1. Power the HC-05 module.
2. Enable Bluetooth on the Android phone.
3. Pair with the HC-05 module.
4. Default PIN:
   - 1234
   - or 0000
5. Open a Bluetooth Terminal app.
6. Connect to HC-05 and send commands.

## Connections

HC-05 TX → Arduino RX

HC-05 RX → Arduino TX

LEDs connected to D8, D9 and D10 through 220Ω resistors.

## Output

Bluetooth commands control the LEDs in real time.
