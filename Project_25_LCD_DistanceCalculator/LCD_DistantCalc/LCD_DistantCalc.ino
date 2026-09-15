
#include <LiquidCrystal.h>


int rs = 8;
int en = 9;
int D4 = 3;
int D5 = 4;
int D6 = 5;
int D7 = 6;
LiquidCrystal screen(rs, en, D4, D5, D6, D7);


int triggerPin = 11;
int echoPin = 10;
int time;
float distance;
float speed = 0.0343;  //centimeters per microsecond

int buttonPin = 12;
int buttonOld = 1;
int buttonNew;

int numberOfReadings = 200;
float totalAmount = 0;
int counter = 1;
float avgTime = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(500000);

  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buttonPin, INPUT);

  screen.begin(16, 2);
}


void loop() {
  // put your main code here, to run repeatedly:

  int dt_micro = 5;
  int dt_mili = 4000;

  digitalWrite(buttonPin, HIGH);
  buttonNew = digitalRead(buttonPin);

  if (buttonOld == 1 && buttonNew == 0) {
    counter = 1;
    totalAmount = 0.0;
    avgTime = 0.0;
    screen.setCursor(0, 0);
    screen.print("Calculating....");
    for (; counter <= numberOfReadings;) {
      digitalWrite(triggerPin, LOW);
      delayMicroseconds(dt_micro);
      digitalWrite(triggerPin, HIGH);
      delayMicroseconds(dt_micro);
      digitalWrite(triggerPin, LOW);
      time = pulseIn(echoPin, HIGH);
      totalAmount = totalAmount + time;
      counter = counter + 1;
    }
    avgTime = (totalAmount) / (numberOfReadings);
    distance = (speed) * (avgTime) / (2.0);
    //distance = distance * 0.393701;  //inches

    screen.clear();
    screen.setCursor(0, 0);
    screen.print("Distance-Target: ");
    screen.setCursor(0, 1);
    screen.print(distance);
    screen.print(" cm");

    delay(dt_mili);

    screen.clear();

  }

  else {
    screen.setCursor(0, 0);
    screen.print("Press The");
    screen.setCursor(3, 1);
    screen.print("Button--->");
    screen.setCursor(0, 0);
  }
  buttonOld = buttonNew;


  // Serial.println(time);

  // delay(dt_mili);
}
