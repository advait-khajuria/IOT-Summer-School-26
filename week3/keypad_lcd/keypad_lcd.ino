/*
  Project: Keypad Password Lock
  Author: Advait Khajuria
  IIT Jammu Summer School 2026

  Uses a 4x4 keypad and 16x2 LCD.
  Correct PIN: 1234
*/

#include <Keypad.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {A0, A1, A2, A3};
byte colPins[COLS] = {A4, A5, 6, 7};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

const String password = "1234";
String input = "";

const int redLED = 8;
const int buzzer = 9;

int wrongAttempts = 0;

void setup() {

  lcd.begin(16,2);

  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  lcd.print("ENTER PIN:");
}

void loop() {

  char key = keypad.getKey();

  if (key) {

    if (key >= '0' && key <= '9') {

      input += key;

      lcd.setCursor(input.length()-1,1);
      lcd.print("*");
    }

    if (input.length() == 4) {

      lcd.clear();

      if (input == password) {

        lcd.print("ACCESS");
        lcd.setCursor(0,1);
        lcd.print("GRANTED");

        digitalWrite(redLED, LOW);

        wrongAttempts = 0;

      } else {

        lcd.print("ACCESS");
        lcd.setCursor(0,1);
        lcd.print("DENIED");

        digitalWrite(redLED, HIGH);

        tone(buzzer,1000,500);

        wrongAttempts++;

        if (wrongAttempts >= 3) {

          lcd.clear();

          lcd.print("LOCKED");

          delay(10000);

          wrongAttempts = 0;
        }
      }

      delay(2000);

      input = "";

      lcd.clear();

      lcd.print("ENTER PIN:");
    }
  }
}
