
int redPin = 12;
int greenPin = 7;
int bluePin = 8;

String lightColour;
String msg = "Enter the Colour you want to see: ";


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println();

  Serial.print(msg);
  while (Serial.available() == 0){}
  Serial.println("LIGHTING UP SAID COLOUR----------------------->");

  lightColour = Serial.readString();

  if (lightColour == "Red" || lightColour == "RED" || lightColour == "red"){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
  }


  if (lightColour == "Blue" || lightColour == "BLUE" || lightColour == "blue"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
  }


  if (lightColour == "Green" || lightColour == "GREEN" || lightColour == "green"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
  }

  if (lightColour == "Off" || lightColour == "OFF" || lightColour == "off"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
  }

  if (lightColour == "All" || lightColour == "ALL" || lightColour == "all"){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,HIGH);
  }

  if (lightColour == "Magenta" || lightColour == "magenta" || lightColour == "MAGENTA"){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
  }

  if (lightColour == "Cyan" || lightColour == "CYAN" || lightColour == "cyan"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,HIGH);
  }

  if (lightColour == "Yellow" || lightColour == "YELLOW" || lightColour == "yellow"){
    analogWrite(redPin,255);
    analogWrite(greenPin,150);
    analogWrite(bluePin,0);
  }

  if (lightColour == "foosha" || lightColour == "Foosha" || lightColour == "FOOSHA"){
    analogWrite(redPin,255);
    analogWrite(greenPin,0);
    analogWrite(bluePin, 255);
  }

  if (lightColour == "orange" || lightColour == "Orange" || lightColour == "ORANGE"){
    analogWrite(redPin, 255);
    analogWrite(greenPin, 128);
    analogWrite(bluePin, 0);
  }

  if (lightColour == "orange" || lightColour == "Orange" || lightColour == "ORANGE"){
    analogWrite(redPin, 255);
    analogWrite(greenPin, 128);
    analogWrite(bluePin, 0);
  }

  if (lightColour == "gray" || lightColour == "Gray" || lightColour == "GRAY"){
    analogWrite(redPin, 128);
    analogWrite(greenPin, 128);
    analogWrite(bluePin, 128);
  }

  

    








}
