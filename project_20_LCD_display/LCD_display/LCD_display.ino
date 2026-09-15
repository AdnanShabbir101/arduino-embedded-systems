#include <LiquidCrystal.h>

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal LCD(rs,en,d4,d5,d6,d7);


void setup() {
  // put your setup code here, to run once:  
  
  LCD.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  // LCD.setCursor(3, 0);
  // LCD.print("ARWA is");
  // LCD.setCursor(3, 1);
  // LCD.print("Amazing!!");

   int dt = 100;
  // delay(dt);

  // LCD.clear();

  // delay(dt);



  int counter = 0;
  while (counter < 10){
    
  LCD.setCursor(2, 0);
  LCD.print("Counting from");

  delay(500);
  LCD.clear();

  LCD.setCursor(4, 0);
  LCD.print("1 TO 10: ");

  delay(500);

  LCD.setCursor(8, 1);
  counter = counter + 1;

  LCD.print("(");
  LCD.print(counter);
  LCD.print(")");
  delay(2000);


    
  }

  delay(dt);
  LCD.clear();







}
