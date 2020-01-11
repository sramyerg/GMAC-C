/* 
 * http://gmac.2600tech.com/
 * http://gmac.2600tech.com/2020/01/10/dht22-temperature-and-humidity-sensor/
 */

#include <DHT.h>

const int dhtpin = 7;  

// use DHT22 sensor
DHT dhtsensor (dhtpin, DHT22); 

double humidity;  
double temperature; 

void setup(){
  Serial.begin(9600);
  dhtsensor.begin();
  }

void loop(){
  
  humidity    = dhtsensor.readHumidity();
  temperature = dhtsensor.readTemperature();
  
  Serial.println("Humidity " + String(humidity) + "%");
  Serial.println("Temperature " + String(temperature) +" Celsius");
  
  delay(2000); 
  }
