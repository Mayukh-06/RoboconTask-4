#include <Arduino.h>

int sw1 = 5,sw2 = 6;
int led1 = 2,led2 = 3,led3 = 4;
void setup () {
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop(){
  bool s1 = digitalRead(sw1);
  bool s2 = digitalRead(sw2);
  digitalWrite(led1,s1 && s2);
  digitalWrite(led2,!s1 && s2);
  digitalWrite(led3,!s2);
}