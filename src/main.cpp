#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

const int LED_PIN = 22;

void setup() {
  // 設定 GPIO22 為輸出
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // 每 500ms 切換一次，達到每秒閃爍 1Hz
  digitalWrite(LED_PIN, HIGH);
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}