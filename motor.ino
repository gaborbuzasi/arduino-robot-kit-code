#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() {
  //Serial.begin(9600);
  //Serial.println("Starting...");
  servoLeft.attach(13);
  servoRight.attach(12);

  
  tone(4, 500, 200);
  delay(250);
  /*
  tone(4, 500, 200);
  delay(250);
  tone(4, 500, 200);
  delay(250);
  */
 
  //servoRight.writeMicroseconds(1400);
  //delay(1000);
  servoLeft.writeMicroseconds(1600);
  delay(1000);
  //servoLeft.detach();
  //servoRight.detach();
}

void loop() {
  //oi
}
