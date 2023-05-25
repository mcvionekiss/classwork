#ifndef DENG_CAR_H
#define DENG_CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
  string make;
  int year;
  string model;
public:
  Car();
  Car(string, int, string);

  void setMake(string);
  void setYear(int);
  void setModel(string);
  string getMake();
  int getYear();
  string getModel();
};

void compare(Car, Car);

#endif