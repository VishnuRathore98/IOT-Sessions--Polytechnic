void setup() {
    Serial.begin(9600);  // Initialize serial monitor
  }
  
  void loop() {
    int sensorValue = analogRead(A0);  // Read from analog pin A0
    Serial.println(sensorValue);       // Print value
    delay(500);
  }
  