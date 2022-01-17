#include <Arduino.h>
#define LED_BUILTIN 33
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, 0);
  Serial.println("Hello");
  delay(100);
  digitalWrite(LED_BUILTIN, 1);
  delay(900);
}