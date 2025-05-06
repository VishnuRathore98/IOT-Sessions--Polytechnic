void setup() {
    pinMode(8, OUTPUT);
  }
  
  void loop() {
    tone(8, 1000);  // Play 1kHz tone on pin 8
    delay(500);
    noTone(8);      // Stop tone
    delay(500);
  }
  