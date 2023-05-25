#include "car.h"

int main()
{
  Car mycar("Honda", 2015, "Civic");
  Car yourcar("Ford", 2018, "Explorer");
  
  cout << "My car is " << mycar.getMake() << endl;
  cout << "Your car is " << yourcar.getMake() << endl;
  
  // Print out whose car is older
  compare(mycar, yourcar);
  
  return 0;
}