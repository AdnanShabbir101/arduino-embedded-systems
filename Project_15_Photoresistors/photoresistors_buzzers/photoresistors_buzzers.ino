

int buzzPin = 7;
int readerPin = A1;

int timer;

int lightVal;

void setup() {
  // put your setup code here, to run once:

  pinMode(buzzPin,OUTPUT);
  pinMode(readerPin,INPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  lightVal = analogRead(readerPin);

  timer = (9.0) / (955.0) * (lightVal - 3) + 1;

  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(timer);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(timer);

  //Serial.print("Photo-resistor reading is: ");
  //Serial.println(lightVal);




}
