enum State {
  IDLE,
  COIN_INSERTED,
  ITEM_SELECTED,
  DISPENSING
};

State state = IDLE;

const int red = 13;
const int yellow = 12;
const int green = 11;

const int coinBtn = 2;
const int selectBtn = 3;
const int cancelBtn = 4;

void setup() {

  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(coinBtn, INPUT_PULLUP);
  pinMode(selectBtn, INPUT_PULLUP);
  pinMode(cancelBtn, INPUT_PULLUP);

  Serial.begin(9600);

  Serial.println("State : IDLE");
}

void loop() {

  switch(state) {

    case IDLE:

      digitalWrite(red,HIGH);
      digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);

      if(digitalRead(coinBtn)==LOW){
        state=COIN_INSERTED;
        Serial.println("IDLE -> COIN_INSERTED");
        delay(300);
      }

    break;

    case COIN_INSERTED:

      digitalWrite(red,LOW);
      digitalWrite(yellow,HIGH);
      digitalWrite(green,LOW);

      if(digitalRead(selectBtn)==LOW){
        state=ITEM_SELECTED;
        Serial.println("COIN_INSERTED -> ITEM_SELECTED");
        delay(300);
      }

      if(digitalRead(cancelBtn)==LOW){
        state=IDLE;
        Serial.println("COIN_INSERTED -> IDLE");
        delay(300);
      }

    break;

    case ITEM_SELECTED:

      digitalWrite(red,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(green,HIGH);

      Serial.println("ITEM_SELECTED -> DISPENSING");
      delay(1000);

      state=DISPENSING;

    break;

    case DISPENSING:

      Serial.println("DISPENSING...");
      delay(3000);

      Serial.println("DISPENSING -> IDLE");

      state=IDLE;

    break;

  }

}
