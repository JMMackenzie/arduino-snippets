/*The hello world of servo's*/

#include <Servo.h>

Servo serv;

void setup(){
  serv.attach(11); //Using pin 11
  serv.write(180);
}

void loop(){
  serv.write(0);
  delay(1000);
  serv.write(180);
  delay(1000);
}

