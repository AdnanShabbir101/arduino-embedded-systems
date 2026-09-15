



void setup() {
  // put your setup code here, to run once:

pinMode(12,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(8,HIGH);
delay(50);
digitalWrite(8,LOW);
delay(50);
digitalWrite(8,HIGH);
delay(50);                                //          S
digitalWrite(8,LOW);
delay(50);
digitalWrite(8,HIGH);
delay(50);
digitalWrite(8,LOW);
delay(1000);

digitalWrite(7,HIGH);
delay(1000);
digitalWrite(7,LOW);
delay(1000);
digitalWrite(7,HIGH);
delay(1000);                                         //         O
digitalWrite(7,LOW);
delay(1000);
digitalWrite(7,HIGH);
delay(1000);
digitalWrite(7,LOW);


digitalWrite(12,HIGH);
delay(50);
digitalWrite(12,LOW);
delay(50);
digitalWrite(12,HIGH);
delay(50);                                       //                S
digitalWrite(12,LOW);
delay(50);
digitalWrite(12,HIGH);
delay(50);
digitalWrite(12,LOW);
delay(1000);







}
