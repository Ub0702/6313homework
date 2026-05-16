const int ledPin = 2;
unsigned long previousMillis = 0;
long interval = 500;
int state = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    state = !state;
    digitalWrite(ledPin, state);
  }
}
