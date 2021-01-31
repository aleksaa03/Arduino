const int ledPin = 13;
const int buttonPin = 12;

void setup()
{
  pinMode(ledPin, OUTPUT); 
  pinMode(buttonPin, INPUT);
}

void loop()
{
  if (digitalRead(buttonPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
