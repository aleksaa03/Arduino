#define echoPin 2 
#define trigPin 3 

long duration; 
int distance;

const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600); 
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
 
  distance = duration * 0.034 / 2;

  if (distance < 5) {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, LOW);
  }

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm");
  Serial.print("\n");

  delay(1000);
}
