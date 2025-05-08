#include <ESP8266WiFi.h>
#include <SinricPro.h>
#include <SinricProSwitch.h>


// Your WiFi credentials
const char* ssid = "12345678";
const char* password = "qazwsxedc";

// Your Sinric Pro credentials
#define APP_KEY     "<App-Key>"
#define APP_SECRET  "<App-Secret>"
#define DEVICE_ID   "<Device-Id>"

#define LED_PIN 5  //LED connected to D1 (GPIO5)

bool onPowerState(const String &deviceId, bool &state) {
  if (deviceId == DEVICE_ID) {
    digitalWrite(LED_PIN, state ? HIGH : LOW);
    Serial.printf("Device %s turned %s\r\n", deviceId.c_str(), state ? "ON" : "OFF");
  }
  return true;
}

void setupWiFi() {
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500); 
    Serial.print(".");
  }
  Serial.println("\nWiFi connected");
}

void setupSinricPro() {
  SinricProSwitch &mySwitch = SinricPro[DEVICE_ID];
  mySwitch.onPowerState(onPowerState);

  SinricPro.begin(APP_KEY, APP_SECRET);
  SinricPro.restoreDeviceStates(true);
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  setupWiFi();
  setupSinricPro();
}

void loop() {
  SinricPro.handle();
}