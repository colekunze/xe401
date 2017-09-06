#include <Servo.h>

//globals
Servo motor1;
Servo motor2;

//<rotateDelay>
//PURPOSE: The purpose of this function is to take an integer representing the degrees the user desires the robot to turn
//and return the amount of delay necessary for approximately that degree of rotation. The equation was derived through
//collection of data and plotting the results.
int rotateDelay(int deg) {
  return (150+deg)/15;  
}

void setup() {
 motor1.attach(10);
 motor2.attach(13);

  for(int i = 90; i >=30; i--) {
    int j = 30+(90-i); //opposite direction
    motor1.write(i);
    motor2.write(j);
    delay(rotateDelay(270));
    }

 motor1.detach();
 motor2.detach();
}

void loop() {}

