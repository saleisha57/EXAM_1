/*
I affirm that all the code given below was written solely by me, Aleisha Smith, and that any help I recieved adhered to the rules stated for this exam.
*/

#ifndef __RACECAR_H__
#define __RACECAR_H__

#include "Vehicle.h"

class RaceCar : public Vehicle
{
 public:
  
 RaceCar(string color) : Vehicle(color) 
  {
    _topspeed = 250;
    wheels.push_back(305);
  };
  
  void Description()
  {
    cout<<"I am a "<<_color<<" race car that can race "<<_topspeed<<"mph. My wheels are 305mm."<<endl;
  };

};

#endif
