#include <Servo.h>

int redPin = 8;
int bluePin = 2;
int buzzerPin = 7;


int readerPin = A1;
int servoPin = 8;

Servo myServo;
int angle;

int readings;
int dt = 1000;
int dt_LED = 250;
int dt_buzzer = 1;

int readerPin_2 = A5;
int readings_2_final;
int readings_2_initial;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(readerPin,INPUT);
  pinMode(readerPin_2,INPUT);

  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);

  myServo.attach(servoPin);

  readings_2_initial = analogRead(readerPin_2);
  readings_2_initial = readings_2_initial - 25;
}

void loop() {
  // put your main code here, to run repeatedly:\

  readings = analogRead(readerPin);
  readings_2_final = analogRead(readerPin_2);

  angle = ( 180.0 / 1023.0) * ( readings );

  myServo.write(angle);

  Serial.print("");
  Serial.print(" Initial reading: ");
  Serial.print(readings_2_initial);
  Serial.print(" Final reading: ");
  Serial.println(readings_2_final);

  while(readings_2_initial > readings_2_final){

    digitalWrite(buzzerPin,HIGH);
    delay(dt_buzzer);
    digitalWrite(buzzerPin,LOW);
    delay(dt_buzzer);

    //digitalWrite(redPin,HIGH);
    digitalWrite(bluePin,HIGH);

    readings_2_final = analogRead(readerPin_2);
    readings = analogRead(readerPin);
    angle = ( 180.0 / 1023.0) * ( readings );
    myServo.write(angle);
  }

  if(readings_2_initial < readings_2_final){
    //digitalWrite(redPin,LOW);
    digitalWrite(bluePin,LOW);
    digitalWrite(buzzerPin,LOW);

    readings_2_final = analogRead(readerPin_2);
    readings = analogRead(readerPin);

    angle = ( 180.0 / 1023.0) * ( readings );
    myServo.write(angle);

  }

  // while(readings_2_initial > readings_2_final){
  //   digitalWrite(buzzerPin,HIGH);
  //   delay(dt_buzzer);
  //   digitalWrite(buzzerPin,LOW);
  //   delay(dt_buzzer);
  // }

  //delay(dt);
 






}
