const int ledPin = 11;// Needs to be connected to PWM Pin (11, 10, 9, 6, 5, 3)

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 255; i++) {
    analogWrite(ledPin, i);
    delay(30);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(30);
  }
}
