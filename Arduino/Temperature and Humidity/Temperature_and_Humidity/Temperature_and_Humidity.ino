#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 2
#define DHTYPE DHT11

DHT dht(DHTPIN, DHTYPE);

const int ledPin = 13;

void setup() {
  dht.begin();
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int temp = dht.readTemperature();
  int hum = dht.readHumidity();

  if (round(hum) >= 50) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  Serial.print("Temperatura: ");
  Serial.print(round(temp * 10) / 10);
  Serial.print(" C ");
  Serial.print("Vlaznost: ");
  Serial.print(round(hum * 10) / 10);
  Serial.print(" %");
  Serial.print("\n");
  delay(2000);
}
