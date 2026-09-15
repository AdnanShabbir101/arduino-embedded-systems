#include <DHT.h>
#define Type DHT11

#include <LiquidCrystal.h>
int rs = 3;
int en = 4;
int D4 = 5;
int D5 = 6;
int D6 = 7;
int D7 = 8;
LiquidCrystal screen(rs,en,D4,D5,D6,D7);

int sensePin = 2;
DHT tempSensor(sensePin,Type);



void setup() {
  // put your setup code here, to run once:

  Serial.begin(500000);
  tempSensor.begin();

  screen.begin(16,2);



}

void loop() {
  // put your main code here, to run repeatedly:

  float Celsius;
  float Fahrenheit;
  float humid;

  int dt = 500;

  Celsius = tempSensor.readTemperature();
  Fahrenheit = tempSensor.readTemperature(true);
  humid = tempSensor.readHumidity();

  Serial.println(Celsius);
  Serial.println(Fahrenheit);
  Serial.println(humid);

screen.setCursor(0,0);
screen.print("T: ");
screen.print(Celsius);
screen.print("C");
screen.print("|");
screen.print(Fahrenheit);
screen.print("F");

screen.setCursor(0, 1);
screen.print("Humid: ");
screen.print(humid);
screen.print("%");

 delay(dt);



}

