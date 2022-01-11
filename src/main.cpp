#include <Arduino.h>
#if defined(ESP8266)
  #define ON 0
  #define OFF 1
  #define PIN_LED LED_BUILTIN
#elif defined(ESP32)
  #define ON 1
  #define PIN_LED 12
  #define OFF 0
#endif
void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  Serial.println("Hello");
  digitalWrite(PIN_LED, ON);
  delay(100);
  digitalWrite(PIN_LED, OFF);
  delay(900);
}