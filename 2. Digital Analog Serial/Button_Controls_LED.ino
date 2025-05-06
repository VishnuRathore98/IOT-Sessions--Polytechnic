const int buttonPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Use internal pull-up
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin); // Read button

  if (buttonState == LOW) { // Button pressed
    digitalWrite(ledPin, HIGH); // LED on
  } else {
    digitalWrite(ledPin, LOW);  // LED off
  }
}
