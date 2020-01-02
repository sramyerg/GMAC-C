/* 
 *  Graceson D. Cuyasen
 *  https://gmac-c.000webhostapp.com/
 */

#include <DHT.h>

const int dhtpin = 2;  

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
