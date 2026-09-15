String msg1 = "Which LED would you like to light up, green, blue, or white ? or pehaps, ALL?";

String LightLED;

int whitePin = 7;
int bluePin = 12;
int greenPin = 8;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(whitePin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println();

  Serial.println(msg1);
  while (Serial.available() == 0){}

  LightLED = Serial.readString();
  Serial.println("Lighting up the said LED----------->");

  if(LightLED == "white" || LightLED == "White" || LightLED == "WHITE"){

    digitalWrite(whitePin,HIGH);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);

  }


  if(LightLED == "blue" || LightLED == "BLUE" || LightLED == "Blue"){

    digitalWrite(whitePin,LOW);
    digitalWrite(bluePin,HIGH);
    digitalWrite(greenPin,LOW);

  }


  if(LightLED == "green" || LightLED == "Green" || LightLED == "GREEN"){

    digitalWrite(whitePin,LOW);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,HIGH);

  }

   if(LightLED == "ALL" or LightLED == "all" or LightLED == "All"){

    digitalWrite(whitePin,HIGH);
    digitalWrite(bluePin,HIGH);
    digitalWrite(greenPin,HIGH);

  }
  





}
