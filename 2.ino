// 실험 2단계: LED 2개 교대 점멸 (delay -> millis 비차단 방식으로 개선)

#define LED1 22
#define LED2 23

unsigned long prevMillis = 0;
const long interval = 1000;   // 1초 간격
bool state = false;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  unsigned long now = millis();
  if (now - prevMillis >= interval) {   // delay() 없이 1초마다 전환
    prevMillis = now;
    state = !state;
    digitalWrite(LED1, state ? HIGH : LOW);
    digitalWrite(LED2, state ? LOW : HIGH);
    Serial.println(state);              // 동시에 시리얼 출력 가능
  }
}
