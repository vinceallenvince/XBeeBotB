#include <Servo.h>

Servo servoLeft;
Servo servoRight;
    
void setup () {
  Serial.begin(57600);
  
  servoLeft.attach(9);
  servoLeft.writeMicroseconds(1500);
  
  servoRight.attach(10);
  servoRight.writeMicroseconds(1500);
  
  pinMode(4, OUTPUT);
  digitalWrite(4, LOW);
}

void loop() {
  
  
  if (Serial.available() > 0) {
     
    digitalWrite(4, LOW);
    
    int data = Serial.read() - '0';
    
    if (data == 1) { // servos spin in opposite directions
      servoLeft.writeMicroseconds(1000);
      servoRight.writeMicroseconds(1000);
    }
    
    if (data == 2) {
      servoLeft.writeMicroseconds(1000);
      servoRight.writeMicroseconds(1500);
    }
    
    if (data == 3) {
      servoLeft.writeMicroseconds(1000);
      servoRight.writeMicroseconds(1750);
    }
    
    if (data == 4 || data == 5 || data == 6) { // moves forward
      servoLeft.writeMicroseconds(1000);
      servoRight.writeMicroseconds(2000);
    }

    if (data == 7) {
      servoLeft.writeMicroseconds(1250);
      servoRight.writeMicroseconds(2000);
    }
    
    if (data == 8) {
      servoLeft.writeMicroseconds(1500);
      servoRight.writeMicroseconds(2000);
    }

    if (data == 9) { // servos spin in opposite directions
      servoLeft.writeMicroseconds(2000);
      servoRight.writeMicroseconds(2000);
    }
     
    // uncomment to debug
    //Serial.print(data);
  }
}




