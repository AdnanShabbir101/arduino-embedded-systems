
int greenPin = 7;
int readerPin = 8;

int timer = 100;

int volts;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(greenPin,OUTPUT);
  pinMode(readerPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  volts = digitalRead(readerPin);
  Serial.println(volts);

  if (volts == 1){
    digitalWrite(greenPin,LOW);
  }

  if (volts == 0){
    digitalWrite(greenPin,HIGH);
  }

}
