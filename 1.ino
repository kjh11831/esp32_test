// 실험 1단계: ESP32 Blink 예제 (GPIO 23번 LED 1초 주기 점멸)
// 2주차 실험 - 주석 보강

#define LED_PIN 23    // LED 연결된 GPIO 23번 사용

void setup() {
  pinMode(LED_PIN, OUTPUT);   // LED 핀을 출력으로 설정
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // LED 켜기
  delay(1000);                       // 1초 대기
  digitalWrite(LED_PIN, LOW);   // LED 끄기
  delay(1000);                        // 1초 대기
}
