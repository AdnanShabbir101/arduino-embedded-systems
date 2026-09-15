#include <LiquidCrystal.h>

int rs = 3;
int en = 4;
int d4 = 5;
int d5 = 6;
int d6 = 7;
int d7 = 8;

LiquidCrystal screen(rs, en, d4, d5, d6, d7);

float num1;
float num2;
String function;

int dt = 1500;
int dt_2 = 5000;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(500000);
  screen.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("");

  screen.print("WELCOME!!");

  screen.setCursor(0, 1);
  screen.print("ENTER 1st NUM: ");

  //Serial.println("Enter first number: ");
  while (Serial.available() == 0) {
  }
  num1 = Serial.parseInt();

  //Serial.println("Enter Second number: ");

  screen.clear();
  screen.setCursor(0, 0);
  screen.print("ENTER 2nd NUM: ");


  while (Serial.available() == 0) {
  }

  screen.clear();
  screen.print("First num: ");
  screen.print(num1);

  num2 = Serial.parseInt();

  screen.setCursor(0,1);
  screen.print("Second num: ");
  screen.print(num2);

  //Serial.println("Enter the operation: ");

  delay(dt_2);
  screen.clear();
  screen.print("ENTER OPERATION: ");
  screen.setCursor(0, 1);
  screen.print("( +, -, /, x )");

  while(Serial.available()==0){
  }

  function = Serial.readString();

  // screen.setCursor(15, 0);
  // screen.print(")");
  // screen.setCursor(13,0);
  // screen.print("(");
  // screen.setCursor(14, 0);
  // screen.print(function);



  if (function == "+"){

    //delay(dt);
    screen.clear();
    screen.print(num1);
    screen.print(" + ");
    screen.print(num2);
    screen.print(" => ");
    screen.setCursor(0,1);
    screen.print(num1 + num2);
  }

  if (function == "-"){

    //delay(dt);
    screen.clear();
    screen.print(num1);
    screen.print(" - ");
    screen.print(num2);
    screen.print(" => ");
    screen.setCursor(0,1);
    screen.print(num1 - num2);
  }

  if (function == "x"){

    //delay(dt);
    screen.clear();
    screen.print(num1);
    screen.print(" x ");
    screen.print(num2);
    screen.print(" => ");
    screen.setCursor(0,1);
    screen.print(num1 * num2);
  }

  if (function == "/"){


    //delay(dt);
    screen.clear();
    screen.print(num1);
    screen.print(" / ");
    screen.print(num2);
    screen.print(" => ");
    screen.setCursor(0,1);
    screen.print(num1 / num2);
  }

  delay(dt_2);
  screen.clear();
  screen.setCursor(6, 1);
  screen.print("THANK YOU!");

  delay(3000);
  screen.clear();


}

