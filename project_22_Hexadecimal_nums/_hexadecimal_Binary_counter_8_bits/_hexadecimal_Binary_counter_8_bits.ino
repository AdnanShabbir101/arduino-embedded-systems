int dataPin = 12;
int clockPin = 9;
int latchPin = 11;

byte LED = B00000000;        //to write in hex----- 0x is the syntax

int dt = 1500;

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
  shiftOut(dataPin, clockPin, LSBFIRST, LED);
  LED = LED + 1;
  Serial.println(LED, DEC);
  digitalWrite(latchPin, HIGH);
  delay(dt);
}
