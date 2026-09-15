
int white1 = 6;
int white2 = 3;
int white3 = 5;

//float brightness1_1 = 255;
float brightness1_2 = 255;
float brightness1_3 = 20;
float brightness1_4 = 20;
float brightness1_5 = 20;
float brightness1_6 = 20;

//float brightness2_1 = 255;
float brightness2_2 = 20;
float brightness2_3 = 255;
float brightness2_4 = 20;
float brightness2_5 = 255;
float brightness2_6 = 20;

//float brightness3_1 = 255;
float brightness3_2 = 20;
float brightness3_3 = 20;
float brightness3_4 = 255;
float brightness3_5 = 20;
float brightness3_6 = 20;

int time = 150;



void setup() {
  // put your setup code here, to run once:

pinMode(white1,OUTPUT);
pinMode(white2,OUTPUT);
pinMode(white3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

//analogWrite(white1,brightness1_1);
//analogWrite(white2,brightness2_1);
//analogWrite(white3,brightness3_1);

//delay(time);

analogWrite(white1,brightness1_2);
analogWrite(white2,brightness2_2);
analogWrite(white3,brightness3_2);

delay(time);

analogWrite(white1,brightness1_3);
analogWrite(white2,brightness2_3);
analogWrite(white3,brightness3_3);

delay(time);

analogWrite(white1,brightness1_4);
analogWrite(white2,brightness2_4);
analogWrite(white3,brightness3_4);

delay(time);

analogWrite(white1,brightness1_5);
analogWrite(white2,brightness2_5);
analogWrite(white3,brightness3_5);

delay(time);



}
