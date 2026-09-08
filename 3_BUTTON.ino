#define LED 23
#define BUTTON 22

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  int btnState = digitalRead(BUTTON);
  if (btnState == LOW) {
    digitalWrite(LED, HIGH);   // 버튼 눌림 → LED ON
  } else {
    digitalWrite(LED, LOW);    // 버튼 안눌림 → LED OFF
  }
}
