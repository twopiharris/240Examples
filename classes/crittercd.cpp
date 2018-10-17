//Critter with constructor and destructor
#include <iostream>
#include <cstring>

using namespace std;

class Critter {
  private:
    char *name;
  public:
    Critter();
    Critter(char *name);
    ~Critter();
    void setName(char *name);
    char* getName();
}; // end class def

Critter::Critter(){
  //new operator creates variables on the heap
  name = new char[50];
  strcpy(name,"anonymous");
}

Critter::Critter(char *name){
  name = new char[50];
  strcpy(Critter::name, name);;
}

Critter::~Critter(){
  //destructor is called when class is deleted
  cout << "I confess I breathe my last..." << endl;
  //name is on heap, so it should be deleted
  delete[] name;
}

void Critter::setName(char *name){
  strcpy(Critter::name, name);
}

char* Critter::getName(){
  return name;
}

int main(){
  //critter array is built on heap
  Critter *c = new Critter[3];
  //delete critter array.
  delete[] c;
}
