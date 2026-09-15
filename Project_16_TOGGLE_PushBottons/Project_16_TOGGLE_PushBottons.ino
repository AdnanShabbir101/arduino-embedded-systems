

int buttonPin = 7;
int buttonNew;
int buttonOld = 1;
int LEDstate = 0;
int LEDpin = 12;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(500000);
  
   pinMode(buttonPin,INPUT);
   pinMode(LEDpin,OUTPUT);
   
   }

void loop() {

  buttonNew = digitalRead(buttonPin);

  if(buttonNew == 1 && buttonOld == 0){

    if(LEDstate == 0){
      digitalWrite(LEDpin,HIGH);
      LEDstate = 1;
    }

    else{
      digitalWrite(LEDpin,LOW);
      delay(500);
      LEDstate = 0;
    }

  }

  buttonOld = buttonNew;


}
