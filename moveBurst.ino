#include <Servo.h>



//globals

Servo motor1;

Servo motor2;

int start = 90;
int fin = 0;

void setup() {

  

  

//  for(int i = 30; i <= 90; i++) {

//    motor1.write(i);

//    motor2.write(i);

//    delay(10);

//  }

  motor1.attach(10);

  motor2.attach(13);

  



}



void loop() {
  
for(int i = 90; i >=30; i--) {

    motor1.write(i);

    motor2.write(i);

    delay(10);
 } 

}
 



