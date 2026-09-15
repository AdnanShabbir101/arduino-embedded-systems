#include <Servo.h>

int readerPin = A1;
int readings;

int buttonPin = 2;
int new_button_state;
String condition;
int previous_button_state = 1;
int servo_state = 0;

int servoPin = 7;
int angle;

Servo myServo;

int dt = 1000;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(readerPin,INPUT);
  
  myServo.attach(servoPin);

  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

  readings = analogRead(readerPin);
  new_button_state = digitalRead(buttonPin);

  if(previous_button_state = 1 && new_button_state == 0){
    condition  = ("True");
  }

 
  if(condition == "True" && servo_state == 0){
      readings = analogRead(readerPin);
      angle = (18.0 / 57.0) * ( readings - 30);
      myServo.write(angle);
      new_button_state = digitalRead(buttonPin);
      
      if(new_button_state == 0){
        condition = " False";
      }
  }

  // Serial.println(previous_button_state);
  //previous_button_state = new_button_state;

  if(condition=="False"){
    myServo.write(angle);
    angle = 0;
    new_button_state = digitalRead(buttonPin);
    servo_state = 0;
  }
  
  Serial.print("The angle of the Servo is: ");
  Serial.print(angle);

  Serial.print(" The button value is: ");
  Serial.println(new_button_state);

  //delay(dt);

  if (angle <= 0){
    angle = 0;
  } 
  if (angle >= 180){
    angle = 180;
  }



}
