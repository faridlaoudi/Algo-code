#include "Arduino.h"
#include "move.h"

Move::Move(int data,int latch,int clock){
  _data=data;
  _latch=latch;
  _clock=clock;

}

void Move::begin(){
  pinMode(_data, OUTPUT);
  pinMode(_latch, OUTPUT);
  pinMode(_clock, OUTPUT);
  
}

void Move::forward(){
  digitalWrite(_latch,LOW);
  shiftOut(_data, _clock, MSBFIRST, 0xAA);
  digitalWrite(_latch, HIGH);
}

void Move::stop(){
  digitalWrite(_latch,LOW);
  shiftOut(_data, _clock, MSBFIRST, 0x00);
  digitalWrite(_latch, HIGH);
}

void Move::right(){
  digitalWrite(_latch,LOW);
  shiftOut(_data, _clock, MSBFIRST, 0x99);
  digitalWrite(_latch, HIGH);
}

void Move::left(){
  digitalWrite(_latch,LOW);
  shiftOut(_data, _clock, MSBFIRST, 0x66);
  digitalWrite(_latch, HIGH);
}