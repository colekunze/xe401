#include <Servo.h>

//globals
Servo motor1;
Servo motor2;

void setup() {
  // put your setup code here, to run once:
  motor1.attach(10);
  motor2.attach(13);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int pos = 0; pos <= 180; pos += 1) {
    motor1.write(pos);
    motor2.write(pos);  
  }
}

/*https://learn.adafruit.com/adafruit-arduino-lesson-13-dc-motors/arduino-code*/
