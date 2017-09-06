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

//}

//deg = 2.1351(delay) - 12.162
//(12.162+deg)/2.1351 = delay
int deg = 270;
int delae = (150+deg)/15;
  for(int i = 90; i >=30; i--) {
    int j = 30+(90-i);

    motor1.write(i);

    motor2.write(j);

    delay(delae); //16=~90 degrees 22=~180 degrees

  }

  motor1.detach();

  motor2.detach();

}
