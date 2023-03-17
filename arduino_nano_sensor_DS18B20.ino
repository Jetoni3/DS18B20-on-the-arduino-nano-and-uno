 
// This is a code made especially for the DS18B20 Temprature sensor made by Jeton
// It might work with other sensors since it uses a library for multiple sensors
// This works with the arduino nano and uno and might work with a board with a esp32 chip
#include <OneWire.h>
#include <DallasTemperature.h>

// GPIO where the DS18B20 is connected to
const int oneWireBus = 4;     

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(oneWireBus);

// Pass our oneWire reference to Dallas Temperature sensor 
DallasTemperature sensors(&oneWire);

void setup() {
  // Start the Serial Monitor
  Serial.begin(115200);
  // Start the DS18B20 sensor
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures();
  // Define temperatureC and temperatureF 
  float temperatureC = sensors.getTempCByIndex(0);
  float temperatureF = sensors.getTempFByIndex(0);
  // Output of the temperature on your Serial Monitor
  Serial.print("De temperatuur is: ");
  Serial.print(temperatureC); 
  Serial.print("ºC, "); 
  Serial.print(temperatureF); 
  Serial.println("ºF"); 
  // The amount of ms delay after every temperature reading before looping
  delay(10000);
}
