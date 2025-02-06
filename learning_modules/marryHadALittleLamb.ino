/*
Author: Matt Krueger
Lesson: NONE - personal project
Program: Marry Had A Little Lamb Song utilizing buzzers
*/

// notes used
int c4 = 262;
int d4 = 294;
int e4 = 330;
int f4 = 349;
int g4 = 392;
int a4 = 440;
int b4 = 494;

// buzzer pins
int passive = 12;
int active = 13;

// led pins 
int ledGreenPin = 3;
int ledRedPin = 2;

void setup() 
{
  // buzzers
  pinMode(passive, OUTPUT);
  pinMode(active, OUTPUT);

  // led pins 
  pinMode(ledGreenPin, OUTPUT);
  pinMode(ledRedPin, OUTPUT);

  // enable output to terminal
  Serial.begin(9600);
}

void loop()
{
  start();
  marryHadALittleLamb();
  end();
}


void start()
{
  Serial.println("STARTING...");
  // do 3 short beats before starting
  for (int i = 0; i < 3; i++)
  {
    Serial.print(3-i);
    Serial.println("...");
    digitalWrite(active, HIGH);
    delay(500);
    digitalWrite(active, LOW);
    delay(500);
  }
}

void end()
{
  Serial.println("ENDING...");
  
  // do 5 quick beats before ending
  for (int i = 0; i < 5; i++)
  {
    Serial.print(5-i);
    Serial.println("...");
    digitalWrite(ledRedPin, HIGH);
    digitalWrite(active, HIGH);
    delay(250);
    digitalWrite(ledRedPin, LOW);
    digitalWrite(active, LOW);
    delay(250);
  }
}

void marryHadALittleLamb()
{
  // melody ai generated... i am not a musical prodigy
  int melody[] = {e4, d4, c4, d4, e4, e4, e4, d4, d4, d4, e4, e4, e4, e4, d4, c4, d4, e4, e4, e4, e4, d4, d4, e4, d4, c4, d4};

  for (int i = 0; i < 26; i++)
  {
    Serial.println(melody[i]);
    digitalWrite(ledGreenPin, HIGH);
    tone(passive, melody[i], 400);
    delay(200);
    digitalWrite(ledGreenPin, LOW);
    delay(200);
  }
}