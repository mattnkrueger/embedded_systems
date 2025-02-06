/*
Author: Matt Krueger
Lesson: mrhwang tutorial lesson 2
Program: RGB LED
*/

int pinR=3;
int pinG=5;
int pinB=6;

void setup() 
{
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
}

void loop()
{
  Serial.println("red");
  setColor(255,0,0); // r 
  delay(1000);
  Serial.println("green");
  setColor(0, 255,0); // g
  delay(1000);
  Serial.println("blue");
  setColor(0,0, 255); // b
  delay(1000);
  Serial.println("something else");
  setColor(25,27,87); // something else
  delay(1000);
  
}

void setColor(int r, int g, int b)
{
  analogWrite(pinR, r);
  analogWrite(pinG, g);
  analogWrite(pinB, b);
}