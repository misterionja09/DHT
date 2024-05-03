#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 7 //definindo o pino
#define DHTTYPE DHT22 //definindo modelo do sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  delay(2000);
}

void loop() {
  Serial.print("Umidade: "); 
  Serial.print(dht.readHumidity());
  Serial.print("%");
  Serial.print("/Temperatura");
  Serial.print(dht.readTemperature());
  Serial.print("°C");
  delay(2000);
}