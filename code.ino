#include <Servo.h>

Servo myservo;
int redPin = 13;
int greenPin = 12;
int pirPin = 2;
int pirValue;
int pos = 45;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(pirPin, INPUT);
digitalWrite(redPin, LOW);
digitalWrite(greenPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
pirValue = digitalRead(pirPin);
if(pirValue == 1){
  myservo.write(90);
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  } else {
   myservo.write(180);
   digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  }
}
