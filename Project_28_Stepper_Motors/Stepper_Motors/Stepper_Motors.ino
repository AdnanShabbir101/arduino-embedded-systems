
#include <Stepper.h>

int SPR = 2048;
Stepper mot(SPR, 8, 10, 9, 11);

int buttonPin = 13;
int buttonOld = 1;
int buttonNew;

int motState = 1;   //Clockwise

int dt = 500;

int motSpeed = 10;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(500000);

  mot.setSpeed(motSpeed);

  pinMode(buttonPin,INPUT);
}

void loop() { 
  // put your main code here, to run repeatedly:

  digitalWrite(buttonPin,HIGH);
  buttonNew = digitalRead(buttonPin);

  if(buttonOld == 0 && buttonNew == 1){
    motState = motState *-1;
}

mot.step(motState);

buttonOld = buttonNew;


}