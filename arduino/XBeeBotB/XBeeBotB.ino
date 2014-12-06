#include <Servo.h>

Servo servoLeft;
Servo servoRight;
    
void setup () {
  Serial.begin(57600);
  
  servoLeft.attach(9);
  servoLeft.writeMicroseconds(1500);
  
  servoRight.attach(10);
  servoRight.writeMicroseconds(1500);
}

void loop() {
  
  if (Serial.available() > 0) {
    int data = Serial.read() - '0';
    
    int valLeft = map(data, 1, 9, 1000, 2000);
    int valRight = map(data, 1, 9, 2000, 1000);
    
    servoLeft.writeMicroseconds(valLeft);
    servoRight.writeMicroseconds(valRight);
      
    /*if (data == 1) {
      servoLeft.writeMicroseconds(1000);
      servoRight.writeMicroseconds(2000);
    }
    
    if (data == 2) {
      servoLeft.writeMicroseconds(1500);
      servoRight.writeMicroseconds(2000);
    }

    if (data == 3) {
      servoLeft.writeMicroseconds(2000);
      servoRight.writeMicroseconds(1000);
    }

    if (data == 4) {
      servoLeft.writeMicroseconds(1000);
      servoRight.writeMicroseconds(1500);
    }
    
    if (data == 5) {
      servoLeft.writeMicroseconds(1500);
      servoRight.writeMicroseconds(1500);
    }*/
    
    Serial.print(data);
  }
}




