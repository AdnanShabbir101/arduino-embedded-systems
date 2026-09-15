void setup() {
  // put your setup code here, to run once:

pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(12,HIGH);
delay(3000);

digitalWrite(7,HIGH);
digitalWrite(8,LOW);
digitalWrite(12,LOW);
delay(1000);

digitalWrite(8,HIGH);
digitalWrite(12,LOW);
digitalWrite(7,LOW);
delay(3000);

digitalWrite(12,HIGH);
digitalWrite(7,HIGH);
digitalWrite(18,HIGH);
delay(1000);

//digitalWrite(8,LOW);
//delay(50);
}
