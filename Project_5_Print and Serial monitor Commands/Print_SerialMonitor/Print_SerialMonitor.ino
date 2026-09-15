int num1 = 1;
int time = 1500;
int num2 = 1;
String str1 = ("Number = ");
int radius = 1;
float area;
float pi = 3.14;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
//Serial.print(str1);
//Serial.println(num1);
//num1 = num1 + 1;
area = pi*radius*radius;
Serial.print(" Area of Circle with radius = ");
Serial.print(radius);
Serial.print(" is equal to = ");
Serial.print(area);
Serial.println(".");
radius = radius + 1;
delay(time);

}
