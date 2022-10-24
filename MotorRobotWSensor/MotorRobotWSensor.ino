#include <SparkFun_TB6612.h>
#include "SR04.h"

#define TRIG_PIN 12
#define ECHO_PIN 10
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

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

void setup() {
  Serial.begin(9600);
  delay(1000);

}

void loop() {
   a=sr04.Distance();
   Serial.print(a);
   Serial.println("cm");

   forward(motor1, motor2, 100);
   delay(200);

   if (a < 20){
    
    brake(motor1, motor2);
    delay(1000);
    right(motor1, motor2, 100);
    delay(1000);
   }


}
