#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9);  // Connect signal wire to pin 9
}

void loop() {
  myServo.write(0);   // Move to 0°
  delay(1000);
  myServo.write(90);  // Move to 90°
  delay(1000);
  myServo.write(180); // Move to 180°
  delay(1000);
}
