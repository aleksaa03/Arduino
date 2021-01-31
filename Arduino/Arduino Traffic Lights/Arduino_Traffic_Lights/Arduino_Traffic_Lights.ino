const int redPin = 13;
const int yellowPin = 11;
const int greenPin = 12;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(1000);
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(1000);
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(1000);
  digitalWrite(greenPin, LOW);
}
