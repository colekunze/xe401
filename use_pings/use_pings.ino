#include <Servo.h>
//globals
Servo motor1;
Servo motor2;
int start = 90;
int fin = 0;
const int pingPin1 = 12;
const int pingPin2 = 11;
const int pingPin3 = 13;
int motorAngle = 30;
bool stopper;
long inches,distForward,distLeft,distRight;
long DANGERZONE = 15;
int MAXSPEED = 50;
//end globals


void setup() {
  motor1.attach(10);
  motor2.attach(13);
}
void loop() {
//====SENSOR_COLLECT====
  distForward = ping(12);
  distLeft = ping(11);
  distRight = ping(13);
//======================


//=====LOGIC======
if(stopper) {
  halt();
  
  if(distLeft > 10) { 
    rotate(1);//turn left
  } else if(distRight > 10) {
    rotate(0); //turn right
  } else {
    rotate(2); //turn around
  }
  
  stopper = false;
  motorAngle = 30;
} else if(inches <= DANGERZONE) {
  stopper = true;
} else {
  motor1.write(motorAngle);
  motor2.write(motorAngle);
  delay(20);
}
//================

//=Motor Spin up=
if(motorAngle < MAXSPEED) {
  motorAngle += 1;
} 
else {
  motorAngle = MAXSPEED;
}
//===============


}//end loop



//functions
void halt() {
  motor1.write(45);
  motor2.write(45);
  delay(20);
}

int ping(int pin) {
  long duration;
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
  delayMicroseconds(2);
  digitalWrite(pin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pin, LOW);
  pinMode(pin, INPUT);
  duration = pulseIn(pin, HIGH);
  return microsecondsToInches(duration);
}


int rotateDelay(int deg) {
  return (150+deg)/15;  
}
 
void rotate(int deg) {//TODO
  motor2.write(45);
  for(int i = 90; i >= 30; i--) {
    motor1.write(i);
    delay(30);
    }
}
  
long microsecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}
long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
