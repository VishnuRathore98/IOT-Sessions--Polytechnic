int buttonForward = 2;
int buttonBackward = 3;

int IN1 = 8;
int IN2 = 9;
int ENA = 10;

void setup() {
  pinMode(buttonForward, INPUT_PULLUP);
  pinMode(buttonBackward, INPUT_PULLUP);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
}

void loop() {
  bool forwardPressed = digitalRead(buttonForward) == LOW;
  bool backwardPressed = digitalRead(buttonBackward) == LOW;

  if (forwardPressed && !backwardPressed) {
    // Forward
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(ENA, 200);
  } else if (backwardPressed && !forwardPressed) {
    // Backward
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    analogWrite(ENA, 200);
  } else {
    // Stop
    analogWrite(ENA, 0);
  }
}
