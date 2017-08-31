
#include <Servo.h>
Servo myservo;
Servo myservo2;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(13);
  myservo2.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(0);
  myservo2.write(0);
  delay(2000);
   myservo.write(90);
   myservo2.write(90);
  delay(2000);
   myservo.write(160);
   myservo2.write(160);
  delay(2000);
}

//http://se.inf.ethz.ch/people/wei/robots/arduino_sabertooth2x12/sabertooth.html
