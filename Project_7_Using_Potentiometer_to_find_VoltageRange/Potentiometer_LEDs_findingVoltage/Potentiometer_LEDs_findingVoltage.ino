int redPin = 4;
int greenPin = 7;
int yellowPin = 12;
int whitePin = 11;

int readerPin = A1;
int readerPin_2 = A2;

int volts_1;
int volts_2;
float realVolts_1;
float realVolts_2;

int time = 1000;
int redPinTime = 50;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);

  pinMode(readerPin,INPUT);
  pinMode(whitePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  volts_1 = analogRead(readerPin);
  realVolts_1 = (5.0/1023.0) * volts_1;

  Serial.print("Potentiometer reading is = ");
  Serial.print(realVolts_1);
  Serial.println(" volts");


  if (realVolts_1 > 0.0 && realVolts_1 < 2.0 || realVolts_1 == 0.0){
    digitalWrite(yellowPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,LOW);
    delay(time);
  }



  if (realVolts_1 > 2.0 && realVolts_1 < 3.0){
    digitalWrite(yellowPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(redPin,LOW);
    delay(time);
  }


   if (realVolts_1 > 3.0 && realVolts_1 < 5.0){
    digitalWrite(yellowPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(redPin,HIGH);


   }

   if (realVolts_1 > 4.5 || realVolts_1 == 5.0){
     digitalWrite(redPin,HIGH);
     delay(redPinTime);
     digitalWrite(redPin,LOW);
     digitalWrite(redPin,HIGH);
     delay(redPinTime);
     digitalWrite(redPin,LOW);
     digitalWrite(redPin,HIGH);
     delay(redPinTime);
     digitalWrite(redPin,LOW);
     delay(redPinTime);
   }

volts_2 = analogRead(readerPin_2);
realVolts_2 = 4.0117 * readerPin_2;
analogWrite(whitePin,realVolts_2);




}
