#include <Servo.h>

//globals
Servo motor1;
Servo motor2;

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
//databaseExists()
//initializeDB()
//handleDetect()
//checkTrigger()
//obstacleHandle()
//tapeHandle()
//wallHandle()
//doorHandle()
//goalCheck()


void setup() {
  //attach motor1
  //attach motor2
  //setup ping1
  //setup ping2
  //setup ping3
  //setup photoresistor
  //setup infared
  //if(!databaseExists):
    //initializeDB
  //else setupDB
  
}

void loop() {
  //initialize trigger var
  //while(!trigger):
    //moveForward
    //trigger = checkTrigger()
  //handleDetect()
  //if(goalState):
    //stop
}

