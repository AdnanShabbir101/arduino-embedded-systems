#include <Servo.h>
int servoPin_1 = 12;
int servoPin_2 = 11;
Servo servo1;
int angle1;
Servo servo2;
int angle2;

int readerX = A0;
int readerY = A1;
int buttonPin =6;

float Xval;
float Yval;
int Bval;

int buzzPin = 7;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(500000);

  pinMode(readerX, INPUT);
  pinMode(readerY, INPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buzzPin,OUTPUT);

  servo1.attach(servoPin_1);
  servo2.attach(servoPin_2);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buttonPin, HIGH);

  Xval = analogRead(readerX);
  Yval = analogRead(readerY);
  Bval = digitalRead(buttonPin);

  // Serial.print("Xval: ");
  // Serial.println(Xval);
  // Serial.print(" Yval: ");
  // Serial.print(Yval);
  // Serial.print(" Bval: ");
  // Serial.println(Bval);

  if(Bval == 0){
    digitalWrite(buzzPin,HIGH);
    Bval = digitalRead(buttonPin);
  }

  if(Bval == 1){
    digitalWrite(buzzPin,LOW);
    Bval = digitalRead(buttonPin);
  }


  angle1 = (180.0) - (90.0 / 508.0) * (Xval);
  angle2 = (90.0/515.0) * (Yval) - (90.0/515.0) *(508) + 90;

  servo1.write(angle1);
  servo2.write(angle2); 

  // Serial.print(" Servo1 angle is: ");
  // Serial.print(angle1);
  // Serial.print(" Servo2 angle is: ");
  // Serial.println(angle2);
}
