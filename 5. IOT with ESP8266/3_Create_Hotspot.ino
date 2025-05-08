#include <ESP8266WiFi.h>

const char* ssid = "ESP8266_Hotspot";
const char* password = "12345678";  // Must be at least 8 characters


void setup() {
  Serial.begin(115200);
  pinMode(BUILTIN_LED, OUTPUT);
  digitalWrite(BUILTIN_LED, HIGH); // LED off

  // Start Access Point
  WiFi.softAP(ssid, password);
  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);
  digitalWrite(BUILTIN_LED, LOW); // LED on

}

void loop(){}