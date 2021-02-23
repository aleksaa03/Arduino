const int ledRed = 9;
const int ledGreen = 10;
const int ledBlue = 11;

void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop()
{
  analogWrite(ledRed, random(255));
  analogWrite(ledGreen, random(255));
  analogWrite(ledBlue, random(255));
  delay(1000);
}
