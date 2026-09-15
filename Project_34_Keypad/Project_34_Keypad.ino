
#include <Keypad.h>
#include <LiquidCrystal.h>

const byte ROWS = 4;
const byte COLS = 4;

char hexKeys[ROWS][COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};

byte rowPins[ROWS] = { 9, 8, 7, 6 };
byte colPins[COLS] = { 5, 4, 3, 2 };

Keypad KEYPAD = Keypad(makeKeymap(hexKeys), rowPins, colPins, ROWS, COLS);

int rs = 12;
int en = 10;
int D4 = A0;
int D5 = A1;
int D6 = A2;
int D7 = A3;

LiquidCrystal screen(rs, en, D4, D5, D6, D7);


byte num1;
char num2;

int index = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(500000);

  screen.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:

  screen.setCursor(0, 0);
  screen.print("Enter First Num: ");
  screen.setCursor(index, 1);

  num1 = KEYPAD.getKey();
  
