#include "Arduino.h"
#include "motor.h"

Motor::Motor(int pinm,int speed){
  _pinm=pinm;
  _speed=speed;

}

void Motor::begin(){
  pinMode(_pinm, OUTPUT);
  analogWrite(_pinm, _speed);
}
void Motor::speed(int setSpeed){
  _setSpeed =setSpeed;
  analogWrite(_pinm, setSpeed);

}
