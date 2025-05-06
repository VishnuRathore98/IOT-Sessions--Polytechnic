void setup() {
    pinMode(2, INPUT_PULLUP);  // Use internal pull-up resistor
    pinMode(13, OUTPUT);
  }
  
  void loop() {
    if (digitalRead(2) == LOW) {  // Button pressed (pulls to ground)
      digitalWrite(13, HIGH);
    } else {
      digitalWrite(13, LOW);
    }
  }
  