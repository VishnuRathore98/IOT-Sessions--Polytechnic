void setup() {
    pinMode(9, OUTPUT);  // Pin 9 supports PWM
  }
  
  void loop() {
    for (int brightness = 0; brightness <= 255; brightness++) {
      analogWrite(9, brightness);  // Increase brightness
      delay(10);
    }
    for (int brightness = 255; brightness >= 0; brightness--) {
      analogWrite(9, brightness);  // Decrease brightness
      delay(10);
    }
  }
  