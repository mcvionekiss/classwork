#include <iostream>
using namespace std;

class Car
{
private:
  string make;
  int year;
  string model;
public:
  Car() {}
  Car(string mk, int yr, string md) : make(mk), year(yr), model(md) {}

  void setMake(string mk) { make = mk; }
  void setYear(int yr) { year = yr; }
  void setModel(string md) { model = md; }
  string getMake() { return make; }
  int getYear() { return year; }
  string getModel() { return model; }
};