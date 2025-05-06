#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11  // or DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Failed to read from DHT");
    return;
  }

  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" °C  Humidity: ");
  Serial.print(hum);
  Serial.println(" %");
  delay(2000);
}
