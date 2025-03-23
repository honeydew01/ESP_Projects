#include <Arduino.h>

// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  pinMode(0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!digitalRead(0)){
    Serial.print("Button Pressed\n");
  }

  if(digitalRead(2)){
    digitalWrite(2, 0);
  }else{
    digitalWrite(2, 1);
  }

  delay(1000);
}

// put function definitions here:
