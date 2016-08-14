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
  myservo.write(0);
  myservo2.write(0);
  //arm 1 move up 3/4 of the way
  for (pos = 0; pos <= 135; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
  //arm 2 move up 1/2 of the way
  for (pos2 = 0; pos2 <= 90; pos2 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo2.write(pos2);             // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 30000ms for the servo to reach the position
  }
  
  //arm 1 all the way up
  for (pos = 135; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
  //arm 1 move down 1/2
  for (pos = 180; pos >= 90; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);     
  }
  
  //arm 2 all of the way up
  for (pos2 = 90; pos2 <= 180; pos2 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo2.write(pos2);             // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 30000ms for the servo to reach the position
  }
  
  //arm 1 move all the way down
  for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);     
  }
  
  //arm 2 all the way down
  for (pos2 = 180; pos2 >= 0; pos2 -= 1) { // goes from 180 degrees to 0 degrees
    //myservo.write(pos2);              // tell servo to go to position in variable 'pos'
    myservo2.write(pos2);
    delay(15);     
  }
}
