/*
I affirm that all the code given below was written solely by me, Aleisha Smith, and that any help I recieved adhered to the rules stated for this exam.
*/

#ifndef __VEHICLE_H__
#define __VEHICLE_H__

#include "Wheel.h"

class Vehicle
{
 protected:
  string _color;
  int _topspeed;
  vector<Wheel> wheels;
  
 public:
  Vehicle(string color);
  
  virtual void Description() = 0;

};

#endif
