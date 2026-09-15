  
int PinA = A1;
int time = 1000;
int volts;
float realVolts;



void setup() {
  // put your setup code here, to run once:
  pinMode(PinA,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly;
  volts = analogRead(PinA);
  realVolts = (5.0/1023.0) * (volts);
  Serial.println(realVolts);
  delay(time);


}
