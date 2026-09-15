
int voltPin = A1;
int volts;
float realVolts;
int time = 2000;


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

volts = analogRead(A1);
realVolts = (5.0/1023.0) * volts;
Serial.print("Potentiometer voltage is = ");
Serial.println(realVolts);

delay(time);

}
