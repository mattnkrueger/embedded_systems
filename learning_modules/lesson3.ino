/*
Author: Matt Krueger
Lesson: mrhwang tutorial lesson 3
Program: Button LED 
*/

int ledPin = 5;
int buttonAPin = 9;
int buttonBPin = 8;
byte leds = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonAPin, INPUT_PULLUP);
  pinMode(buttonBPin, INPUT_PULLUP);

  // note on INPUT_PULLUP:
  // this means pin used as input, if nothing is connected to the input, it should be 'pulled up' i.e. set to HIGH
  // Default is high unless it is pulled low by pressing input (in this case the button)
  // 
  // For this reason, switches are connected to ground. When a switch is pressed, it then connects the input pin to ground, so that it is no longer high.
  // since the input is normally high (INPUT_PULLUP), and low once switch activated, the logic is backwards! IMPORTANT
}

void loop() {
  if (digitalRead(buttonAPin) == LOW) // NOTE LOW IS PRESSED
  {
    digitalWrite(ledPin, HIGH);
  }

  if (digitalRead(buttonBPin) == LOW) // NOTE LOW IS PRESSED
  {
    digitalWrite(ledPin, LOW);
  }
}
