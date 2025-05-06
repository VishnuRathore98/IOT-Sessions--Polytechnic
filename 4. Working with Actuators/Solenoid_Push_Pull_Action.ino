const int solenoidPin = 8;

void setup() {
  pinMode(solenoidPin, OUTPUT);
}

void loop() {
  digitalWrite(solenoidPin, HIGH);  // Activate
  delay(1000);
  digitalWrite(solenoidPin, LOW);   // Deactivate
  delay(1000);
}
