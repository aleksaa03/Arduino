const int analogPot = 2;
const int ledPin = 6;

int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = round(analogRead(analogPot) / 3.99);
  analogWrite(ledPin, val);
  Serial.print(val);
  Serial.print("\n");
}
