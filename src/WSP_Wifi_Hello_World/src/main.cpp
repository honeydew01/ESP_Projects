#include <Arduino.h>
#include <WiFi.h>

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.mode(WIFI_AP);
  WiFi.softAP("ESP32 BONGALOO", "Hello_Grunt");

  pinMode(0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!digitalRead(0)){
    Serial.print("IP: ");
    Serial.println(WiFi.softAPIP());
  }
  delay(1000);
}

// put function definitions here: