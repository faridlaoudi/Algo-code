#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
  public:
    Motor(int pinm,int speed);
    void begin();
    void speed(int setSpeed);
  private:
    int _pinm,_speed,_setSpeed;
};

#endif
