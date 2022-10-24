#include <SparkFun_TB6612.h>
#include "IRremote.h"

int IRpin = 11;

#define AIN1 3
#define BIN1 7
#define AIN2 4
#define BIN2 8
#define PWMA 5
#define PWMB 6
#define STBY 9

const int offsetA = 1;
const int offsetB = 1;

Motor motor1 = Motor(AIN1, AIN2, PWMA, offsetA, STBY);
Motor motor2 = Motor(BIN1, BIN2, PWMB, offsetB, STBY);

IRrecv IR(IRpin);     // create instance of 'irrecv'
decode_results cmd;      // create instance of 'decode_results'
String myCom;

void setup() {
  // REMOTE
  Serial.begin(9600);
  IR.enableIRIn();

}

void loop() {
  while(IR.decode(&cmd)==0){
  }

  Serial.println(cmd.value,HEX);
  delay(1500);
  IR.resume();

  if (cmd.value==0xFF906F){
    myCom="up";
    Serial.println(myCom); 
    
    forward(motor1, motor2, 100);
    delay(2000);
  }

  if (cmd.value==0xFF02FD){
    myCom="brake";
    Serial.println(myCom);
    brake(motor1, motor2);
  }

  if (cmd.value==0xFFE01F){
    myCom="down";
    Serial.println(myCom);
    
    back(motor1, motor2, -150);
    delay(1000);
  }


}
