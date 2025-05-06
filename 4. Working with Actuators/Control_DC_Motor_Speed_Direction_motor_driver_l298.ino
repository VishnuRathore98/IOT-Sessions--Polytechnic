const int IN1 = 8;
const int IN2 = 9;
const int ENA = 10; // PWM pin for speed control

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
}

void loop() {
  // Forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 200);  // Speed (0-255)
  delay(2000);

  // Stop
  analogWrite(ENA, 0);
  delay(1000);

  // Reverse
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 150);
  delay(2000);

  // Stop
  analogWrite(ENA, 0);
  delay(2000);
}
