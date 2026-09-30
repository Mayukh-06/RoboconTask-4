#include <Arduino.h>

int led = 3;
int potpin = A4;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(potpin, INPUT);
}

void loop(){
  int input = analogRead(potpin);
  int input1 = map(input,0,1023,0,255);
  analogWrite(led,input1);
}