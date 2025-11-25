#include <Arduino.h>

// LED接在GPIO22
const int LED_PIN = 22;

void setup() {
  // 設置GPIO22為輸出模式
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // LED亮0.5秒
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  
  // LED滅0.5秒
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
