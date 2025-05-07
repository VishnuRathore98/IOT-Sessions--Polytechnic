/*

* Ultrasonic Sensor HC-SR04

* An ultrasonic sensor measures distance by sending out sound waves and measuring how long they take to bounce back from an object. It’s like how bats navigate!

    It uses two pins:

        Trig (Trigger) – Sends the sound pulse

        Echo – Receives the reflected pulse

* The time between sending and receiving is used to calculate the distance to an object.

*/

// Define pins
const int trigPin = 9;
const int echoPin = A0;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);   // Trig pin as output
  pinMode(echoPin, INPUT);    // Echo pin as input
  Serial.begin(9600);         // Start serial monitor
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send 10 microsecond pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echoPin: time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = duration * 0.034 / 2;

  // Print distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // Wait half a second
}
