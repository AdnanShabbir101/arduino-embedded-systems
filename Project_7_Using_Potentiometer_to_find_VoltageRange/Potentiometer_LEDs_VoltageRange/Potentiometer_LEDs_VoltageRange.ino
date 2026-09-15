int voltReader = A1;
int redPin = 8;
int bluePin = 7;
int time = 1000;
int volt;
float realVolts;



//brightness


int redlighttime_more = 50;
int redlighttime_less = 500;


void setup() {
  // put your setup code here, to run once:
  pinMode(A1,INPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  volt = analogRead(A1);
  realVolts = (5.0/1023.0) * volt;
  Serial.print("Potentiometer reading is = ");
  Serial.println(realVolts);


if (realVolts > 4.0){

  digitalWrite(redPin,HIGH);
  delay(redlighttime_more);
  digitalWrite(redPin,LOW);
  delay(redlighttime_more);
  digitalWrite(redPin,HIGH);
  delay(redlighttime_more);
  digitalWrite(redPin,LOW);
  delay(redlighttime_more);
  digitalWrite(redPin,HIGH);
  delay(redlighttime_more);
  digitalWrite(redPin,LOW);

  }

if (realVolts < 4.0 && realVolts != 0.0){

  digitalWrite(redPin,HIGH);
  delay(redlighttime_less);
  digitalWrite(redPin,LOW);
  delay(redlighttime_less);
  }

if (realVolts == 0.0){
  digitalWrite(bluePin,HIGH);
}

if (realVolts != 0.0){
  digitalWrite(bluePin,LOW);
}



}
