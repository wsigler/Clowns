//Arduino/Genuino Micro ATmega328 AVRISP mkII
#include <Servo.h>

Servo myservo;
Servo myservo2;

int pos = 0;    // variable to store the servo position
int pos2 = 0;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(7);
}

void loop() 
{
  myservo.write(pos);
  myservo.write(pos2); 
}

