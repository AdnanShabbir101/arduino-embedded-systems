
int lightPin = A1;
int val_1023;

int time = 500;

int greenPin = 2;
int redPin = 7;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(lightPin,INPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(redPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  val_1023 = analogRead(lightPin);

  Serial.print("The Photo-resistor value is: ");
  Serial.println(val_1023);
  

  if (val_1023 < 900 && val_1023 > 600){
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,LOW);
  }

  if (val_1023 <= 600){
    digitalWrite(greenPin,LOW);
    digitalWrite(redPin,HIGH);
  }


}