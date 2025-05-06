const int tempPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(tempPin);
  float voltage = reading * (5.0 / 1023.0);
  float temperatureC = voltage * 100;  // 10mV per degree Celsius
  Serial.print("Temp: ");
  Serial.print(temperatureC);
  Serial.println(" °C");
  delay(1000);
}
