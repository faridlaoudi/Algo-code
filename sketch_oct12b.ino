#include "motor.h"
#include "move.h"

Motor motorg(6,58);
Motor motord(5,52);

Move move(2,3,4);

int gv,dv;

int g=A1;
int d=A0;

void setup(){
motorg.begin();
motord.begin();
move.begin();

pinMode(g, INPUT);
pinMode(d, INPUT);
Serial.begin(9600);

}

void loop(){
  gv= analogRead(g);
  dv= analogRead(d);
  Serial.print("left : ");Serial.println(dv);
  Serial.print("right : ");Serial.println(gv);
  if(dv<150&&gv<150){move.forward(); Serial.println("forward");}
  else if(dv>200&&gv<150){
  move.right();
  Serial.println("right");}
  else if(dv<150 &&gv>200){move.left();
Serial.println("left");}
else if(dv>200&&gv>200){move.forward();}


}