//Arduino/Genuino Micro ATmega328 AVRISP mkII
#include <Servo.h>

Servo myservo;

int pos = 0;    // variable to store the servo position

int endPos = 60;
int startPos = 0;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() 
{
  myservo.write(startPos);
  delay(1500);

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
