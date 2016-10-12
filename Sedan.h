/*
I affirm that all the code given below was written solely by me, Aleisha Smith, and that any help I recieved adhered to the rules stated for this exam.
*/

#ifndef __SEDAN_H__
#define __SEDAN_H__

#include "Vehicle.h"

class Sedan : public Vehicle
{
 public:
  
 Sedan(string color, int seats) : Vehicle(color) 
  {
    number_of_seats = seats;
    _topspeed = 95;
    wheels.push_back(381);
  };
  
  void Description()
  {
    cout<<"I am a "<<_color<<" sedan that can carry "<<number_of_seats<<" people at "<<_topspeed<<"mph. My wheels are 381mm."<<endl;
  };
  
 private:

  int number_of_seats;
  
};

#endif

