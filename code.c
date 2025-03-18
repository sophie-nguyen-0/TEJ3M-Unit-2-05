/*
*created by sophie N
*create on March 18 2025
*
*makes servo move
*/

#include <Servo.h>

Servo servoNumber1;

void setup() {
  // setup servo pins
  servoNumber1.attach(2);
  servoNumber1.write(0);
  
}

void loop() {
  
  servoNumber1.write(90);
  delay(1000);
  servoNumber1.write(0);
  delay(1000);
}