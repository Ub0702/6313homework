const int ledPin = 2;
unsigned long prevTime = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void dot() {
  digitalWrite(ledPin, HIGH);
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
}

void dash() {
  digitalWrite(ledPin, HIGH);
  delay(600);
  digitalWrite(ledPin, LOW);
  delay(200);
}

void loop() {
  // SOS
  dot(); dot(); dot();
  dash(); dash(); dash();
  dot(); dot(); dot();

  delay(2000);
}
