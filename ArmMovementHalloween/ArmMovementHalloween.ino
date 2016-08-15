//Arduino/Genuino Micro ATmega328 AVRISP mkII
#include <Servo.h>

Servo myservo;
Servo myservo2;

int pos = 0;    // variable to store the servo position
int pos2 = 0;

int endPos = 60;
int startPos = 0;

int startPos2 = 90;
int endPos2 = 180;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(7);
}

void loop() 
{
  myservo.write(startPos);
  myservo2.write(startPos2);
  //arm 1 move up 3/4 of the way
  
  delay(2000);

  for(pos = startPos; pos <= endPos; pos +=1)
  {
    myservo.write(pos);
    delay(15);
  }

  for(pos2 = startPos2; pos2 <= endPos2; pos2 +=1)
  {
    myservo2.write(pos2);
    delay(15);
  }
  
  delay(3000);
  
  for(pos2 = endPos2; pos >= startPos2; pos2 -= 1)
  {
    myservo2.write(pos2);
    delay(15);
  }
  
  for(pos = endPos; pos >= startPos; pos -= 1)
  {
    myservo.write(pos);
    delay(15);
  }
  delay(3000);
  
  
}
