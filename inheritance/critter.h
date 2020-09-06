//critter.h
#ifndef CRITTER_H_EXISTS
#define CRITTER_H_EXISTS

#include <string>
//using namespace std;

class Critter {
  // note that we now have a protected permission
  // this means only this class and its subclasses can access this data
  protected:
    std::string name;
  public:
    Critter();
    void setName(std::string name);
    std::string getName();
    void sayHi();
}; // end class def

#endif
