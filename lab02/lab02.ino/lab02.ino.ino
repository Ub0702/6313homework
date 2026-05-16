const int ledPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  Serial.println("LED 亮");
  delay(1000);

  digitalWrite(ledPin, LOW);
  Serial.println("LED 灭");
  delay(1000);
}