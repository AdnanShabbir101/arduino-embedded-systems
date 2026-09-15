
int whitePin = 11;
int readerPin = A1;
int potPin = 8;

int volts;
float LEDvolts;

int time = 1000;




void setup() {
  // put your setup code here, to run once:
  pinMode(whitePin,OUTPUT);
  pinMode(readerPin,INPUT);
  pinMode(potPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  volts = analogRead(readerPin);
  LEDvolts = (255.0/1023.0) * (volts);

  Serial.println(volts);


  analogWrite(11,LEDvolts);





}
