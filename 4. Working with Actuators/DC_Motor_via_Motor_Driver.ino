const int motorPin = 9;  // PWM capable

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  analogWrite(motorPin, 128);  // Run motor at ~50% speed
  delay(2000);
  analogWrite(motorPin, 0);    // Stop
  delay(2000);
}
