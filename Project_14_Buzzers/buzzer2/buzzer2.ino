
int buzzPin = 7;

int timer;

int readerPin = A1;
int volts;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  pinMode(readerPin,INPUT);
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  volts = analogRead(A1);
 

    timer = (9940.0 / 1023.0) * (volts) + 60.0 ;

  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(timer);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(timer);

  while (volts >= 1000){
    digitalWrite(buzzPin,LOW);
    volts = analogRead(A1);
  }

  //Serial.print("Potentiometer Value is: ");
  //Serial.println(volts);






}
