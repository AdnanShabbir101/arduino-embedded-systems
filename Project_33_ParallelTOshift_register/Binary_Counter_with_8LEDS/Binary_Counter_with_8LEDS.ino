int dataPin = 12;
int clockPin = 9;
int latchPin = 11;

byte LED1 = B11111111;  //to write in hex----- 0x is the syntax
byte LED2 = B1010101;
byte LED3 = B101010;
byte LED4 = B10101;
byte LED5 = B1010;
byte LED6 = B101;
byte LED7 = B10;
byte LED8 = B0;
int bit = 8;

int dt = 100;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(500000);

  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LED1);
  digitalWrite(latchPin, HIGH);

  LED1 = LED1 / 2;

  if (LED1 == 0) {
    delay(1000);
    LED1 = B11111111;
  }
  Serial.println(LED1, DEC);

  delay(dt);

  // delay(dt);

  // digitalWrite(latchPin, LOW);
  // shiftOut(dataPin, clockPin, LSBFIRST, LED2);
  // digitalWrite(latchPin, HIGH);

  // delay(dt);

  // digitalWrite(latchPin, LOW);
  // shiftOut(dataPin, clockPin, LSBFIRST, LED3);
  // digitalWrite(latchPin, HIGH);

  // delay(dt);

  // digitalWrite(latchPin, LOW);
  // shiftOut(dataPin, clockPin, LSBFIRST, LED4);
  // digitalWrite(latchPin, HIGH);

  // delay(dt);

  // digitalWrite(latchPin, LOW);
  // shiftOut(dataPin, clockPin, LSBFIRST, LED5);
  // digitalWrite(latchPin, HIGH);

  // delay(dt);

  // digitalWrite(latchPin, LOW);
  // shiftOut(dataPin, clockPin, LSBFIRST, LED6);
  // digitalWrite(latchPin, HIGH);

  // delay(dt);

  // digitalWrite(latchPin, LOW);
  // shiftOut(dataPin, clockPin, LSBFIRST, LED7);
  // digitalWrite(latchPin, HIGH);

  // delay(dt);

  // digitalWrite(latchPin, LOW);
  // shiftOut(dataPin, clockPin, LSBFIRST, LED8);
  // digitalWrite(latchPin, HIGH);

  // delay(dt);
}
