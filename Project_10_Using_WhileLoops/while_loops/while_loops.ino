
int readerPin = A5;
int whitePin = 13;

int time = 1000;
int white_time = 50;

int volts;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(readerPin, INPUT);
  pinMode(whitePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  volts = analogRead(readerPin);
  Serial.println(volts);
  delay(time);

  while(volts >= 800){

    digitalWrite(whitePin,HIGH);
    delay(white_time);
    digitalWrite(whitePin, LOW);
    delay(white_time);
    digitalWrite(whitePin,HIGH);
    delay(white_time);
    digitalWrite(whitePin, LOW);
    delay(white_time);
    digitalWrite(whitePin,HIGH);
    delay(white_time);
    digitalWrite(whitePin, LOW);
    delay(white_time);

    volts = analogRead(readerPin);
    Serial.println(volts);


  }
  digitalWrite(whitePin,LOW);



























}
