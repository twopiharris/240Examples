#include <iostream>

class Vehicle{
  protected:
    int numberOfWheels = 4;
  public:
    virtual void steerLeft() = 0;
    virtual void steerRight() = 0;

    void speedUp(){
      std::cout << "VROOM!" << std::endl;
    } // end speedUp

    void slowDown(){
      std::cout << "SCREEECH!" << std::endl;
    } // end slowDown
}; // end Vehicle class
      
