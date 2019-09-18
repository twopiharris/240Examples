#include <iostream>
#include "critter.h"
#include "car.h"

//using namespace std;

int main(){
  std::cout << "Hi there!" << std::endl;
  Critter c;
  c.setName("Carlyle");
  std::cout << c.getName() << std::endl;

  Car theCar;
  theCar.setDriver(c);
  std::cout << "driver: " << theCar.getDriverName() << std::endl;
} // end main

