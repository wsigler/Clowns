//Arduino Nano ATmega328 AVRISP mkII
#include <Servo.h>

Servo myservo;

int pos = 0;

int startPos = 90;
int endPos = 180;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
}

void loop() 
{
  myservo.write(startPos);
  
  delay(3000);

  for(pos = startPos; pos <= endPos; pos +=1)
  {
    myservo.write(pos);
    delay(15);
  }
  
  delay(3000);
  
  for(pos = endPos; pos >= startPos; pos -= 1)
  {
    myservo.write(pos);
    delay(15);
  }
}

