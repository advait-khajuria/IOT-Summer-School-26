# Digital Piano using Buzzer

## Objective

Build a 4-key digital piano using an Arduino UNO, push buttons, and a passive buzzer. Each button plays a musical note, while an additional button switches between Major and Minor scales.

## Components

- Arduino UNO
- Passive Buzzer
- 5 Push Buttons
- Jumper Wires

## Features

- 4 piano keys (Do, Re, Mi, Fa)
- Major/Minor scale toggle using the fifth button
- Chord mode: pressing two keys together plays Sol (392 Hz)
- Uses the `tone()` function to generate musical notes
- Displays the current scale mode on the Serial Monitor

## Connections

- Buzzer (+) → D8
- Buzzer (−) → GND
- Button 1 → D2
- Button 2 → D3
- Button 3 → D4
- Button 4 → D5
- Mode Button → D6
- Other side of all buttons → GND

## Files

- `digital_piano.ino` – Arduino source code
- `piano_tinkercad.png` – Tinkercad circuit screenshot

## Output

The buzzer plays different musical notes based on the button pressed. Pressing the mode button switches between Major and Minor scales, and pressing two keys simultaneously plays a chord substitute (Sol).

---

**Author:** Advait Khajuria  
**Program:** IIT Jammu Summer School 2026 – IoT & Embedded Systems
