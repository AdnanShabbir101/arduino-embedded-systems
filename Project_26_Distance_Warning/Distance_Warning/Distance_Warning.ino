
#include <LiquidCrystal.h>

#include <DHT.h>


#define type DHT11
//int tempPin = 2;
float celsius;
float humid;
//DHT temp(tempPin,type);


int rs = 11;
int en = 12;
int D4 = 7;
int D5 = 6;
int D6 = 5;
int D7 = 4;
LiquidCrystal screen(rs,en,D4,D5,D6,D7);


int triggerPin = 10;
int echoPin = 9;
int time;
float distance;
float speed = 0.0343;           //meters per microsecond

int yellowPin = 2;
int redPin = 13;
int greenPin = 3;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(triggerPin,OUTPUT);
  pinMode(echoPin,INPUT);

  pinMode(yellowPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin, OUTPUT);

  screen.begin(16,2);

  //temp.begin();
}


void loop() {
  // put your main code here, to run repeatedly:

  int dt_micro = 10;
  int dt_mili = 500;

  //celsius = temp.readTemperature();
 // humid = temp.readHumidity();

  // Serial.println(celsius);


  digitalWrite(triggerPin,LOW);
  delayMicroseconds(dt_micro);
  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(dt_micro);
  digitalWrite(triggerPin,LOW);

  time = pulseIn(echoPin,HIGH);
  distance = (speed) * (time) / (2.0);
  // distance = distance * 0.393701;   //inches

  screen.clear();


  // screen.setCursor(0, 1);
  // screen.print("T:");
  // screen.print(celsius);
  // screen.setCursor(6,1);
  // screen.print("C");

  // screen.setCursor(8, 1);
  // screen.print("H:");
  // screen.print(humid);
  // screen.print("%");


  screen.setCursor(0, 0);
  screen.print("*Dist: ");
  screen.print(distance);
  screen.print(" cm");
  
  Serial.print(0);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(",");
  Serial.println(10);

  delay(dt_mili);

  if(distance > 10){
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);

    
  }


  if(distance < 10.00 && distance > 5.00){
    digitalWrite(yellowPin,HIGH);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);

    
  }

  if(distance < 5.00){
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);


  }


   


}
