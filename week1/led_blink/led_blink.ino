/*
Author: Advait Khajuria
Date: 27 June 2026
Project: LED Blink with Potentiometer Speed Control
Description: Controls LED blink speed using a potentiometer and displays values on the Serial Monitor.
*/
int ledPin = 13;
int potPin = A0;
int blinkDelay;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(potPin);

  blinkDelay = map(sensorValue, 0, 1023, 100, 1000);

  digitalWrite(ledPin, HIGH);
  delay(blinkDelay);
  digitalWrite(ledPin, LOW);
  delay(blinkDelay);

  Serial.print("Potentiometer: ");
  Serial.print(sensorValue);
  Serial.print("  Delay: ");
  Serial.print(blinkDelay);
  Serial.println(" ms");
}
