#include <Servo.h>

//globals
Servo motor1;
Servo motor2;

void setup() {
  motor1.attach(10);
  motor2.attach(13);
  
//  for(int i = 30; i <= 90; i++) {
//    motor1.write(i);
//    motor2.write(i);
//    delay(10);
//  }
  for(int i = 90; i >=30; i--) {
    motor1.write(i);
    motor2.write(i);
    delay(28);
  }
  motor1.detach();
  motor2.detach();
}

void loop() {
  
}
