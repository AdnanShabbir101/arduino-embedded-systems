
int greenPin = 7;
int readerPin = 8;

int dt = 100;

int LEDstate = 1;
int button_old = 0;
int button_new;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenPin,OUTPUT);
  pinMode(readerPin,INPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  button_new = digitalRead(readerPin);

  if (button_new == 1 && button_old == 0){


    if(LEDstate == 0){
      digitalWrite(greenPin,HIGH);
      LEDstate = 1;
    }

    else{
      digitalWrite(greenPin,LOW);
      LEDstate = 0; 
    }
  }


   button_old = button_new;
   //delay(dt);

}
