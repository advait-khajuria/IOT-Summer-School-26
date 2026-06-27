int blinkCounter = 0;
bool ledState = false;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Serial Command Interface Ready");
}

void loop() {

  if (Serial.available()) {

    String cmd = Serial.readStringUntil('\n');
    cmd.trim();

    if (cmd == "LED_ON") {
      digitalWrite(13, HIGH);
      ledState = true;
      Serial.println("LED ON");
    }

    else if (cmd == "LED_OFF") {
      digitalWrite(13, LOW);
      ledState = false;
      Serial.println("LED OFF");
    }

    else if (cmd.startsWith("BLINK ")) {

      int x = cmd.substring(6).toInt();

      if (x >= 1 && x <= 9) {

        for (int i = 0; i < x; i++) {
          digitalWrite(13, HIGH);
          delay(300);
          digitalWrite(13, LOW);
          delay(300);
        }

        blinkCounter += x;

        Serial.print("Blink Count: ");
        Serial.println(blinkCounter);

      } else {
        Serial.println("ERROR: Blink value must be 1-9");
      }
    }

    else if (cmd == "STATUS") {

      Serial.print("LED: ");

      if (ledState)
        Serial.println("ON");
      else
        Serial.println("OFF");

      Serial.print("Blink Counter: ");
      Serial.println(blinkCounter);

    }

    else if (cmd == "RESET") {

      blinkCounter = 0;
      Serial.println("Blink Counter Reset");

    }

    else {

      Serial.println("ERROR: Unknown command");

    }

  }

}
