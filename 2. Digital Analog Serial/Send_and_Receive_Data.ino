void setup() {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
  }
  
  void loop() {
    if (Serial.available() > 0) {
      char input = Serial.read();  // Read one byte
      if (input == '1') {
        digitalWrite(13, HIGH);
      } else if (input == '0') {
        digitalWrite(13, LOW);
      }
    }
  }
  