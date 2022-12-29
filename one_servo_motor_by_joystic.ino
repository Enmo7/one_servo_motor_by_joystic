#include <Servo.h> // import servo motor library.
//#include "servo.h" // previous call.

int xPin = A0; // define the Pin input in joystic on the arduino and give it analog pin.

int xValue; // define variable to save the value of xPin in her.

int servoPosition; // define variable that take the value that the motor will move, after it has been calibrated.

Servo myservomotor; // define variable that will drive the motor directly.


void setup() {
  // put your setup code here, to run once:
  myservomotor.attach(2); // define the pin that the motor connected to it.
  pinMode(xPin, INPUT); // define the pin as an input pin.
  
}

void loop() {
  // put your main code here, to run repeatedly:
  xValue = analogRead(xPin); // define it as a variable whose input has an analog value.
  servoPosition = map(xValue,0,1023,0,160); // Converting the analog value taken from the JSTIC into an angle to drive the motor.
  myservomotor.write(servoPosition); // Writing the value after converting it inside the motor to move it.
  
}
