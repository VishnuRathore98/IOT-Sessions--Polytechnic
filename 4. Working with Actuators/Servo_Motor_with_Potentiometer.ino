#include <Servo.h>

Servo myServo;
int potPin = A0;
int val;

void setup() {
  myServo.attach(9); // Servo signal pin
}

void loop() {
  val = analogRead(potPin);            // Read potentiometer
  int angle = map(val, 0, 1023, 0, 180); // Map to angle
  myServo.write(angle);                // Move servo
  delay(15);
}
