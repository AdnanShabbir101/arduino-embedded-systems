int pin2 = 13;
int pin3 = 12;
int pin4 = 8;
int pin5 = 7;
int time = 1500;




void setup() {
  // put your setup code here, to run once:

pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);        // number: 0
digitalWrite(pin5,LOW);

delay(time);

digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);         // number: 1
digitalWrite(pin5,HIGH);

delay(time);

digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);        // number: 2
digitalWrite(pin5,LOW);

delay(time);

digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);        // number: 3
digitalWrite(pin5,HIGH);

delay(time);

digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);        // number: 4
digitalWrite(pin5,LOW);

delay(time);

digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);        // number: 5
digitalWrite(pin5,HIGH);

delay(time);

digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);        // number: 6
digitalWrite(pin5,LOW);

delay(time);

digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);        // number: 7
digitalWrite(pin5,HIGH);

delay(time);

digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);        // number: 8
digitalWrite(pin5,LOW);

delay(time);

digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);        // number: 9
digitalWrite(pin5,HIGH);

delay(time);

digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);        // number: 10
digitalWrite(pin5,LOW);

delay(time);


}
