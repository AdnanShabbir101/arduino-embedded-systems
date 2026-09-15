
int blinkNumber;
int counter;
float blink_time;

String msg = "Enter the number of times to blink the LED: ";
String msg2 = "Enter the speed of the blink in seconds: ";

int yellowPin = 7;
int yellow_time = 500;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(yellowPin,OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:

    Serial.println();
    Serial.println(msg);
    while (Serial.available() == 0){}
    blinkNumber = Serial.parseInt();


    Serial.println(msg2);
    while (Serial.available()==0){}
    blink_time = Serial.parseFloat();

    blink_time = blink_time * 1000;

    counter = 1;

    for (;blinkNumber >= counter;) {

      digitalWrite(yellowPin,HIGH);
      delay(blink_time);
      digitalWrite(yellowPin,LOW);
      delay(blink_time);

      counter = counter + 1;

    }















      
    }




