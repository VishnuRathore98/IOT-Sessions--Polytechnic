// Define the pin connections
const int irSensorPin = 7;  // IR sensor output pin connected to digital pin 7
const int ledPin = 13;      // LED connected to digital pin 13 (optional)

void setup() {
  pinMode(irSensorPin, INPUT);  // Set IR sensor pin as input
  pinMode(ledPin, OUTPUT);      // Set LED pin as output (optional)
  Serial.begin(9600);           // Begin serial communication for debugging
}

void loop() {
  int sensorValue = digitalRead(irSensorPin);  // Read the value from the IR sensor

  if (sensorValue == LOW) {
    // Obstacle detected
    digitalWrite(ledPin, HIGH);  // Turn on LED (optional)
    Serial.println("Obstacle detected!");
  } else {
    // No obstacle
    digitalWrite(ledPin, LOW);   // Turn off LED (optional)
    Serial.println("No obstacle.");
  }

  delay(100);  // Small delay for stability
}