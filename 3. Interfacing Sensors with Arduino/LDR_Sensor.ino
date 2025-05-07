/*

* LDR Light Detecting Resistor

* Bright light → Lower resistance → Higher analog value
* Dim light → Higher resistance → Lower analog value

*/


int ldrPin = A0;    // LDR connected to analog pin A0
int ldrValue = 0;   // Variable to store LDR reading

void setup() {
  Serial.begin(9600);      // Start serial communication
}

void loop() {
  ldrValue = analogRead(ldrPin);   // Read LDR value (0 to 1023)
  Serial.println(ldrValue);        // Print value to Serial Monitor
  delay(200);                      // Short delay
}
