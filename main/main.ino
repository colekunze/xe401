#include <Servo.h>

//globals
Servo motor1;
Servo motor2;
int addr = 0; //EEPROM init address
byte check; //EEPROM first byte check
//sensor vals
int ping1val = 0;
int ping2val = 0;
int ping3val = 0;
int prval = 0;
int infraredval = 0;
//sensor output pins
int ping1pin;
int ping2pin;
int ping3pin;
int prpin;
int infraredping;

//FUNCTIONS:
//<rotateDelay>
//PURPOSE: The purpose of this function is to take an integer representing the degrees the user desires the robot to turn
//and return the amount of delay necessary for approximately that degree of rotation. The equation was derived through
//collection of data and plotting the results.
int rotateDelay(int deg) {
  return (150+deg)/15;  
}

//movementDelay()
//moveForward()
//handleDetect()
//checkTrigger()
//obstacleHandle()
//tapeHandle()
//wallHandle()
//doorHandle()
//goalCheck()


void setup() {
  //setup motor servos
  motor1.attach(10);
  motor2.attach(13);

  //setup sensors
  //setup ping1
  //setup ping2
  //setup ping3
  //setup photoresistor
  //setup infared
  
  //check if data has been written
  bool db = false;
  byte flag = B11111111;
  if(check == flag) { db = true;}
  else {EEPROM.write(addr,B11111111);} //write init flag (int 255) to eeprom)
  addr += 1;
}

void loop() {
  bool trigger = false;
  //while(!trigger) {
    //moveForward
    //trigger = checkTrigger()
  //handleDetect()
  //if(goalState):
    //stop
    //switch eeprom flag to B00000000
  //}
}


/*EEPROM refs
https://www.arduino.cc/en/Reference/EEPROM -> usage
https://arduino.stackexchange.com/questions/11941/how-to-remember-variable-values-after-rebooting-an-arduino-uno-r3-board -> discovering EEPROM






PING STUFF FROM LAB
void loop() {
 long duration, inches, cm;
 // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
 // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
 
 pinMode(pingPin, OUTPUT);
 digitalWrite(pingPin, LOW);
 delayMicroseconds(2);
 digitalWrite(pingPin, HIGH);
 delayMicroseconds(5);
 digitalWrite(pingPin, LOW);



 // The same pin is used to read the signal from the PING))): a HIGH pulse
 // whose duration is the time (in microseconds) from the sending of the ping
 // to the reception of its echo off of an object.

 pinMode(pingPin, INPUT);
 duration = pulseIn(pingPin, HIGH);

 // convert the time into a distance
 inches = microsecondsToInches(duration);
 cm = microsecondsToCentimeters(duration);

 Serial.print(inches);
 Serial.print("in, ");
 Serial.print(cm);
 Serial.print("cm");
 Serial.println();

 delay(100);
}


long microsecondsToInches(long microseconds) {
 // According to Parallax's datasheet for the PING))), there are 73.746
 // microseconds per inch (i.e. sound travels at 1130 feet per second).
 // This gives the distance travelled by the ping, outbound and return,
 // so we divide by 2 to get the distance of the obstacle.
 // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf
 return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
 // The speed of sound is 340 m/s or 29 microseconds per centimeter.
 // The ping travels out and back, so to find the distance of the object we
 // take half of the distance travelled.
 return microseconds / 29 / 2;
}
*/
