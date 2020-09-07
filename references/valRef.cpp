//passing by value and reference
#include <cstdlib>
#include <iostream>

//using namespace std;

void addOne(int var);
void addOnePointer(int* var);
void addOneRef(int& varPtr);

int main(){

  //add one by value
  std::cout << "===== By Value =====" << std::endl;
  int a = 2;
  std::cout << "a before: " << a << std::endl;
  addOne(a);
  std::cout << "a after: " << a << std::endl;
  std::cout << std::endl;

  //add one by reference c style
  std::cout << "===== By Pointer =====" << std::endl;
  a = 2;
  std::cout << "a before: " << a << std::endl;
  addOnePointer(&a);
  std::cout << "a after: " << a << std::endl;
  std::cout << std::endl;

  //add one by reference c++ style
  std::cout << "===== By Reference =====" << std::endl;
  a = 2;
  std::cout << "a before: " << a << std::endl;
  addOneRef(a);
  std::cout << "a after: " << a << std::endl;
  std::cout << std::endl;

  return 0;
} // end main

void addOne(int var){
  //pass by value
  //take a normal variable as parameter
  //only the value from the variable is kept.
  //changing the value doesn't affect original variable
  var++;
  std::cout << "var during addOne: " << var << std::endl;
} // end addOne


void addOnePointer(int* varPtr){
  //accept the address of the variable
  //dereference to get a normal variable
  //modify that variable
  //change the value at the original pointer position

  //get value of ptr
  int var = *varPtr;
  //increment variable
  var++;
  //pass variable back to pointer
  *varPtr = var;
  std::cout << "value of var in addonePointer is " << var << std::endl;
  std::cout << "value of varPtr in addonePointer is " << varPtr << std::endl;

}

void addOneRef(int& var){
  //pass by reference
  //takes reference to variable. Same variable, new name
  //changing the 'new' variable changes original
  //when copy goes out of scope, original remains
  //c++ only

  var++;
  std::cout << "var during addOnePointer: " << var << std::endl;
} // end addOneRef
