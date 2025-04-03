#include <DHT.h>


#define DHTTYPE DHT11

#define DHTPIN 9 

DHT dht(DHTPIN,DHTTYPE);
void setup() {
  
  Serial.begin(9600);
  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);

  float humedad = dht.readHumidity();
  float temperatura = dht.readTemperature();
  Serial.println("-----------------");




  Serial.print("humedad: ");
  Serial.println(humedad);

  Serial.print("temperatura: ");
  Serial.println(temperatura);
  Serial.println("-----------------");

} 
