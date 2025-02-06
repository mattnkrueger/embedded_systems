/*
Author: Matt Krueger
Lesson: mrhwang tutorial lesson 5
Program: Passive Buzzer
*/

// Passive Buzzer:
// does not work with DC -> AC is used.
// requires square wave frequencies between 2k and 5k to drive. 
// active buzzer is more expensive than the passive one because of multiple built in oscillating circuits (to achieve square wave). 

// frequencies
int first = 262;
int second = 294;
int third = 330;
int fourth = 349;
int fifth = 392;
int sixth = 440;
int seventh = 494;
int eigth = 524;

// output
int passiveBuzzerPin = 12; // NOTE: doesnt necessarily need to be a PWM (~) pin; digital will work

// this is used so wait does not keep getting redeclared inside of 'loop'
int wait = 0;

void setup() {
  pinMode(passiveBuzzerPin, OUTPUT);
}

void loop() {
    wait = 500;

    ascending(wait);

    wait = 200;

    descending(wait);
}

void ascending(int wait)
{
    tone(passiveBuzzerPin, first, wait);
    delay(1000);
    tone(passiveBuzzerPin, second, wait);
    delay(1000);
    tone(passiveBuzzerPin, third, wait);
    delay(1000);
    tone(passiveBuzzerPin, fourth, wait);
    delay(1000);
    tone(passiveBuzzerPin, fifth, wait);
    delay(1000);
    tone(passiveBuzzerPin, sixth, wait);
    delay(1000);
    tone(passiveBuzzerPin, seventh, wait);
    delay(1000);
    tone(passiveBuzzerPin, eigth, wait);
    delay(1000);
}

void descending(int wait)
{
    tone(passiveBuzzerPin, eigth, wait);
    delay(1000);
    tone(passiveBuzzerPin, seventh, wait);
    delay(1000);
    tone(passiveBuzzerPin, sixth, wait);
    delay(1000);
    tone(passiveBuzzerPin, fifth, wait);
    delay(1000);
    tone(passiveBuzzerPin, fourth, wait);
    delay(1000);
    tone(passiveBuzzerPin, third, wait);
    delay(1000);
    tone(passiveBuzzerPin, second, wait);
    delay(1000);
    tone(passiveBuzzerPin, first, wait);
    delay(1000);
}
