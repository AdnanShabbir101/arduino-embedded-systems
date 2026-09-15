#include <DHT.h>
#define type DHT11

int sensePin = 2;

DHT tempSensor(sensePin,type);


#include<LiquidCrystal.h>
int rs = 8;
int en = 9;
int d4 = 3;
int d5 = 4;
int d6 = 5;
int d7 = 6;

LiquidCrystal screen(rs, en, d4, d5, d6, d7);


int time;
float distance;
float speed = 0.0343;  //microseconds per centimeter
int triggerPin = 11;
int echoPin = 10;


int buttonPin = 12;
int buttonOld = 1;
int buttonNew;
int LCDstate = 0; //distance calculator


void setup() {
  // put your setup code here, to run once:
  Serial.begin(500000);

  tempSensor.begin();
  screen.begin(16,2);

  pinMode(triggerPin,OUTPUT);
  pinMode(echoPin,INPUT);

  pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  float humid;
  float temp;

  int dt_micro = 10;
  int dt_mili = 500;

  temp = tempSensor.readTemperature();
  humid = tempSensor.readHumidity();


  digitalWrite(triggerPin,LOW);
  delayMicroseconds(dt_micro);
  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(dt_micro);
  digitalWrite(triggerPin,LOW);

  time = pulseIn(echoPin,HIGH);

  distance = (speed) * (time) / (2.0);

  screen.clear();
  screen.setCursor(0, 0);
  screen.print("Target Distance: ");
  screen.setCursor(0, 1);
  screen.print(distance);
  screen.print(" cm");
  delay(dt_mili);


  digitalWrite(buttonPin,HIGH);
  buttonNew = digitalRead(buttonPin);

  Serial.println(buttonNew);
  if(buttonOld == 1 && buttonNew == 0){

    if(LCDstate == 0){
      screen.clear();
      screen.setCursor(0, 0);
      screen.print("Temp: ");
      screen.print(temp);
      screen.setCursor(0, 1);
      screen.print("Humid: ");
      screen.print(humid);

      LCDstate = 1;
    }

    else{
      screen.clear();
      screen.setCursor(0, 0);
      screen.print("Target Distance: ");
      screen.setCursor(0, 1);
      screen.print(distance);
      screen.print(" cm");

      LCDstate = 0;
    }
  }

  buttonOld = buttonNew;

  while(LCDstate == 1){ 
      temp = tempSensor.readTemperature();
      humid = tempSensor.readHumidity();
      screen.clear();
      screen.setCursor(0, 0);
      screen.print("Temp: ");
      screen.print(temp);
      screen.setCursor(0, 1);
      screen.print("Humid: ");
      screen.print(humid);

      delay(5000);

      LCDstate = 0;
  }
  
  }
