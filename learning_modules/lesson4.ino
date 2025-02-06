/*
Author: Matt Krueger
Lesson: mrhwang tutorial lesson 4
Program: Active Buzzer
*/

// Passive Buzzer: AC (uses pulse width modulation to control the pitch)
// Active Buzzer: DC (cannot control pitch)

int activeBuzzerPin = 2;

void setup() {
  pinMode(activeBuzzerPin, OUTPUT);
}

void loop() {
  unsigned char i;

  while(1)
  {
    // output a frequency (first frequency)
    for (i = 0; i < 10; i++)
    {
      digitalWrite(activeBuzzerPin, HIGH); // turn on buzzer
      delay(2);
      digitalWrite(activeBuzzerPin, LOW); // turn off buzzer
      delay(2000); 
    }
    
    // output a frequency (first frequency)
    for (i = 0; i < 30; i++)
    {
      digitalWrite(activeBuzzerPin, HIGH); // turn on buzzer
      delay(10);
      digitalWrite(activeBuzzerPin, LOW); // turn off buzzer
      delay(10); 
    }
  }
}
