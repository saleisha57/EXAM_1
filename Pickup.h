/*
I affirm that all the code given below was written solely by me, Aleisha Smith, and that any help I recieved adhered to the rules stated for this exam.
*/

#ifndef __PICKUP_H__
#define __PICKUP_H__

#include "Vehicle.h"

class Pickup : public Vehicle
{
 public:

 Pickup(string color, int capacity) : Vehicle(color) 
  {
    _color = color;
    hauling_capacity = capacity;
    _topspeed = 85;
    wheels.push_back(432);
  };
  
  void Description()
  {
    cout<<"I am a "<<_color<<" pickup that can haul "<<hauling_capacity<<"sq.ft at "<<_topspeed<<"mph. My wheels are 432mm."<<endl;
  };

 private:

  int hauling_capacity;
  
};

#endif
