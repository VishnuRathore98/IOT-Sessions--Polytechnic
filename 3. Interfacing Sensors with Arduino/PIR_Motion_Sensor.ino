const int pirPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);
  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(200);
}
