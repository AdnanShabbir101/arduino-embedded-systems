
int buzzPin = 12;
int readerPin = A1;
String condition;

int volts;

int time = 500;
float buzz_time = 1;



void setup() {
  // put your setup code here, to run once:

  pinMode(buzzPin,OUTPUT);
  pinMode(readerPin,INPUT);

  Serial.begin(9600);




}

void loop() {
  // put your main code here, to run repeatedly:

  volts = analogRead(readerPin);
  Serial.print("Potentiometer Reading is: ");
  Serial.println(volts);
  delay(time);
  
  
  if (volts >= 800){
    condition = "True";
    volts = analogRead(readerPin);
    }

  while (condition == "True" and volts >= 800){
    digitalWrite(buzzPin,HIGH);
    delay(buzz_time);
    digitalWrite(buzzPin,LOW);

    
    volts = analogRead(readerPin);
  }

}







