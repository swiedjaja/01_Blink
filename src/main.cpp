#include <Arduino.h>
#if defined(BOARD_ESP32CAM)
  #define LED_ON  0  
  #define LED_OFF 1  
  #define LED_BUILTIN 33
#elif defined(BOARD_ESP32DOIT_DEVKIT)
  #define LED_ON  1  
  #define LED_OFF 0  
#elif defined(BOARD_ESP12F)
  #define LED_ON  0  
  #define LED_OFF 1  
#endif  

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.printf("Arduino Board: %s variant: %s\n", ARDUINO_BOARD, ARDUINO_VARIANT);
  Serial.printf("Chip model: %s, Core: %d, CPU Freq: %u\n", 
    ESP.getChipModel(), ESP.getChipCores(), ESP.getCpuFreqMHz());
  Serial.printf("Flash size: %u, speed: %u, mode: %d\n", ESP.getFlashChipSize(), ESP.getFlashChipSpeed(), ESP.getFlashChipMode());
  Serial.printf("PSRAM size: %u, free: %u\n", ESP.getPsramSize(), ESP.getFreePsram());
  Serial.printf("Heap size: %u, free: %u\n", ESP.getHeapSize(), ESP.getFreeHeap());
}

void loop() {
  digitalWrite(LED_BUILTIN, LED_ON);
  Serial.println("Hello");
  delay(100);
  digitalWrite(LED_BUILTIN, LED_OFF);
  delay(2900);
}