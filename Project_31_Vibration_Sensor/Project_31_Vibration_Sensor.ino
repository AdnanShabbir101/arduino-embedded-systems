int tiltPin = 2;
int tiltVal;

int whitePin = A1;
int greenPin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(500000);

  pinMode(tiltPin,INPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(whitePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(tiltPin,HIGH);

  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);

  if(tiltVal == 0){
    digitalWrite(greenPin,HIGH);
    digitalWrite(whitePin,LOW);
  }

  else{
    digitalWrite(greenPin,LOW);
    digitalWrite(whitePin,HIGH);
  }








}
