#include <DHT.h>
#include <Adafruit_Sensor.h>

#define Type DHT11

#define sensePin 2

DHT climate_sensor(sensePin, Type);

float humid;
float celsius;
float fahrenheit;

int dt = 2000;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  climate_sensor.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  humid = climate_sensor.readHumidity();
  celsius = climate_sensor.readTemperature();
  fahrenheit = climate_sensor.readTemperature(free);

  Serial.print(" Temperature in Celsius: ");
  Serial.println(celsius);
  Serial.print(" Temperature in farenheit: ");
  Serial.println(fahrenheit);
  Serial.print(" Humidity: ");
  Serial.println(humid);

  delay(dt);
}
