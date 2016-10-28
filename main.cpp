/*
I affirm that all the code given below was written solely by me, Aleisha Smith, and that any help I recieved adhered to the rules stated for this exam.
*/

#include "Sedan.h"
#include "RaceCar.h"
#include "Pickup.h"

int main()
{
	//PT -- You are close on this. Why did you change my code? Part of the goal was to see virtual methods working.
	//PT -- In the code commented out, you simply needed Garage[0] = new RaceCar("Red"), and it would've worked.
	//PT -- -20
  RaceCar fast("Red");
  Sedan car("Purple", 7);
  Pickup truck("Blue", 700);

  fast.Description();
  car.Description();
  truck.Description();

  /*
  Vehicle * Garage[3];

  Garage[0] = RaceCar(new RaceCar("Red"));
  Garage[1] = Sedan(new Sedan("Purple", 7));
  Garage[2] = Pickup(new Pickup("Blue", 700));
		    

  Garage[0] = new RaceCar("Red");
  Garage[1] = new Sedan("Purple", 7);
  Garage[2] = new Pickup("Blue", 700);
 

  for( int i = 0; i < 3; i ++ )
    {
      Garage[i]->Description();
    }
  */

  
  return 0;
}
