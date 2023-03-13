#include <Arduino.h>
#include <WiFi.h>
#include <WiFiManager.h>
#define PUSH_BUTTON 15
void setup() {
  Serial.begin(115200);
  pinMode(PUSH_BUTTON, INPUT_PULLUP);
  WiFiManager wifiManager;
  
  if (digitalRead(PUSH_BUTTON) == LOW) {
    Serial.println("Button pressed, starting configuration portal");
    // wifiManager.startConfigPortal("ESP32-AP");
    wifiManager.resetSettings();
  }
  wifiManager.autoConnect();
  Serial.println("connected...yeey :)");
}

void loop() {
  // put your main code here, to run repeatedly:
}