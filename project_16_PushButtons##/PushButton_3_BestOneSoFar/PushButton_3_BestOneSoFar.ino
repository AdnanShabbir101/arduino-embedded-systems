int whitePin = 11;
int buzzerPin = 4;

int readerPin_bright = 7;
int readerPin_dim = 8;

int bright;
int bright_1 = 0;
int dim;
int dim_1 = 0;
int LED_brightness = 0;


int dt =100;
int buzzer_time = 60;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(readerPin_bright,INPUT);
  pinMode(readerPin_dim,INPUT);

  pinMode(whitePin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bright = digitalRead(readerPin_bright);
  dim = digitalRead(readerPin_dim);


  if (bright == 0 && bright_1 == 0){
    LED_brightness = 5 + LED_brightness;
    analogWrite(whitePin,LED_brightness);
    delay(dt);
    dim_1 = 0;
  }


  if(LED_brightness > 255){
    analogWrite(whitePin,255);

    bright_1 = 1;

    digitalWrite(buzzerPin,HIGH);
    delayMicroseconds(buzzer_time);
    digitalWrite(buzzerPin,LOW);
    delayMicroseconds(buzzer_time);
  }


  if(dim == 0 && dim_1 == 0){
    LED_brightness = LED_brightness - 5;
    analogWrite(whitePin,LED_brightness);
    delay(dt);
    bright_1 =0;
  }

  if (LED_brightness <= 0){
    digitalWrite(whitePin,LOW);
    bright_1 = 0;
    dim_1 = 1;
    // digitalWrite(buzzerPin,HIGH);
    // delayMicroseconds(buzzer_time);
    // digitalWrite(buzzerPin,LOW);
    // delayMicroseconds(buzzer_time);
    
  }



  }
  


