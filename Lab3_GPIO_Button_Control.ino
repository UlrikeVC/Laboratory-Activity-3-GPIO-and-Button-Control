
#include <Arduino.h>

const uint8_t BUTTON_PIN = 4;
const uint8_t LED_PIN = 18;
const uint8_t LED2_PIN = 5;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(LED2_PIN, HIGH);
}

void loop() {
  bool pressed = (digitalRead(BUTTON_PIN) == LOW);

  if (pressed) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(LED2_PIN, LOW);
  } else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(LED2_PIN, HIGH);
  }
}
