#include <IRremote.h>
int IRpin = 9;

IRrecv IR(IRpin);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(500000);

  IR.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:

  while(IR.decode(&results)==0){

  }

  Serial.println(results.value,HEX);
  delay(1500);
  IR.resume();


}
