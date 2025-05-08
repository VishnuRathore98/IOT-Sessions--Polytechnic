
void setup() {
  pinMode(BUILTIN_LED, OUTPUT);
}

void loop(){

    // Blinking LED Onboard
    delay(1000);
    digitalWrite(BUILTIN_LED, LOW); // LED on
    delay(1000);
    digitalWrite(BUILTIN_LED, HIGH); // LED on


}