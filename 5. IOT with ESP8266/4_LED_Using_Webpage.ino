#include <ESP8266WiFi.h>

const char* ssid = "ESP8266_Hotspot";
const char* password = "12345678";  // Must be at least 8 characters

const int ledPin = 5; // GPIO5 = D1

WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); // LED off

  // Start Access Point
  WiFi.softAP(ssid, password);
  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);

  server.begin();
}

void loop() {
  WiFiClient client = server.available();
  if (!client) return;

  while (!client.available()) delay(1);

  String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush();

  // Handle LED control
  if (request.indexOf("/LED=ON") != -1) {
    digitalWrite(ledPin, HIGH);
  }
  if (request.indexOf("/LED=OFF") != -1) {
    digitalWrite(ledPin, LOW);
  }

  // Send simple HTML response
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println();
  client.println("<html><body>");
  client.println("<h2>ESP8266 LED Control</h2>");
  client.println("<a href=\"/LED=ON\"><button>Turn LED ON</button></a>");
  client.println("<a href=\"/LED=OFF\"><button>Turn LED OFF</button></a>");
  client.println("</body></html>");
}
