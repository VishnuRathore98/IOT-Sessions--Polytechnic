int potPin = A0;  // Potentiometer connected to analog pin A0
int potValue;     // Variable to store the potentiometer value

void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  potValue = analogRead(potPin);    // Read the analog value (0–1023)
  Serial.println(potValue);         // Print the value to the Serial Monitor
  delay(200);                       // Small delay to slow down output
}
