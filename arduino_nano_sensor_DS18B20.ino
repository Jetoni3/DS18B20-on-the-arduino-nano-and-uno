 
#include <OneWire.h>
#include <DallasTemperature.h>
 float temp = 0.0;
 int oneWireBus = 12;
 OneWire oneWire(oneWireBus);
 DallasTemperature sensors(&oneWire);
 OneWire oneWire(oneWireBus);
 DallasTemperature sensors(&oneWire);
 void setup() {
     Serial.begin(9600);
     Serial.println("1-wire temperatuur sensor");
     sensors.begin();
 }
 void loop() {
 
     sensors.requestTemperatures();
     temp = sensors.getTempCByIndex(0);
 
     Serial.print("Temperatuur is: ");
     Serial.println(temp);
 
     delay(1000);
 
 }
 sensors.requestTemperatures();
 temp = sensors.getTempCByIndex(0);
 Serial.print("Temperatuur is: ");
 Serial.println(temp);
 delay(1000);
