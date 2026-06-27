const int buzzer = 8;

const int b1 = 2;
const int b2 = 3;
const int b3 = 4;
const int b4 = 5;
const int modeBtn = 6;

bool major = true;
bool lastMode = HIGH;

void setup() {
  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  pinMode(b3, INPUT_PULLUP);
  pinMode(b4, INPUT_PULLUP);
  pinMode(modeBtn, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {

  bool current = digitalRead(modeBtn);

  if (lastMode == HIGH && current == LOW) {
    major = !major;

    if (major)
      Serial.println("Major Mode");
    else
      Serial.println("Minor Mode");

    delay(250);
  }

  lastMode = current;

  int pressed = 0;

  if (digitalRead(b1) == LOW) pressed++;
  if (digitalRead(b2) == LOW) pressed++;
  if (digitalRead(b3) == LOW) pressed++;
  if (digitalRead(b4) == LOW) pressed++;

  if (pressed >= 2) {
    tone(buzzer, 392);
  }
  else if (digitalRead(b1) == LOW) {
    tone(buzzer, 262);
  }
  else if (digitalRead(b2) == LOW) {
    tone(buzzer, 294);
  }
  else if (digitalRead(b3) == LOW) {
    tone(buzzer, major ? 330 : 311);
  }
  else if (digitalRead(b4) == LOW) {
    tone(buzzer, major ? 349 : 330);
  }
  else {
    noTone(buzzer);
  }
}
