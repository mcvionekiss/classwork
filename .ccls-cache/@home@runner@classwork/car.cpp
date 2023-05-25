#include "car.h"

Car::Car() {}
Car::Car(string mk, int yr, string md) : make(mk), year(yr), model(md) {}

void Car::setMake(string mk) { make = mk; }
void Car::setYear(int yr) { year = yr; }
void Car::setModel(string md) { model = md; }
string Car::getMake() { return make; }
int Car::getYear() { return year; }
string Car::getModel() { return model; }

void compare(Car car1, Car car2){
  if (car1.getYear() < car2.getYear()){
    cout << "The first car is older." << endl;
  }
  else if (car1.getYear() > car2.getYear()){
    cout << "The second car is older." << endl;
  }
  else if (car1.getYear() == car2.getYear()){
    cout << "These two cars are made in the same year." << endl;
  }
}