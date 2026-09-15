
int triggerPin = 8;
int echoPin = 9;

int timeTakenPing;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(500000);

  pinMode(triggerPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int dt_micro = 10;
  int dt_miliSeconds = 1000;

  digitalWrite(triggerPin,LOW);
  delayMicroseconds(dt_micro);
  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(dt_micro);
  digitalWrite(triggerPin,LOW);

  timeTakenPing = pulseIn(echoPin,HIGH);
  Serial.println(timeTakenPing);

  delay(dt_miliSeconds);


}
