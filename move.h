#ifndef Move_h
#define Move_h

#include "Arduino.h"

class Move
{
  public:
    Move(int data,int latch,int clock);
    void begin();
    void forward();
    void right();
    void left();
    void stop();
  private:
    int _data,_latch,_clock;
};

#endif
