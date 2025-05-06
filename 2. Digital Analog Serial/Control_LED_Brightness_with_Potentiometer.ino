const int potPin = A0;
const int ledPin = 9;  // PWM-capable pin

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);           // 0–1023
  int pwmValue = map(potValue, 0, 1023, 0, 255); // Scale to 0–255
  analogWrite(ledPin, pwmValue);
}
