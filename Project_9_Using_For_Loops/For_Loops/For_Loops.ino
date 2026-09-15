
int redPin = 9;
int redBlinkTime = 200;
int redBlinkCount = 3;

int yellowPin = 6;
int yellowBlinkCount = 5;
int yellowBlinkTime = 200;

int j = 1;



int time = 1000;

void setup() { 

  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:

  for(j = 1; j <= redBlinkCount; j = j +1){
    analogWrite(redPin,255);
    delay(redBlinkTime);
    analogWrite(redPin,0);
    delay(redBlinkTime);
  }

  for(j=1; j <= yellowBlinkCount; j = j +1){
    analogWrite(yellowPin,255);
    delay(yellowBlinkTime);
    analogWrite(yellowPin,0);
    delay(yellowBlinkTime);
  }



}
