const int ledPin = 2;
const int freq = 5000;
const int channel = 0;
const int resolution = 8;

void setup() {
  ledcSetup(channel, freq, resolution);
  ledcAttachPin(ledPin, channel);
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    ledcWrite(channel, i);
    delay(10);
  }
  for (int i = 255; i >= 0; i--) {
    ledcWrite(channel, i);
    delay(10);
  }
}
