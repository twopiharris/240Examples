#include <iostream>

using namespace std;

void addOne(int myVal){
  myVal++;
}

void addOnePtr( int* ptrMyVal){
  (*ptrMyVal)++;
}

void addOneRef(int& refA){
  refA++;
}


int main(){
  int a = 5;
  
  int b[5] = {99, 1, 2, 3, 4};
  
  
  int* ptrA = &a;
  
  cout << a << endl;
  
  cout << &a << endl;
  
  cout << *ptrA << endl;
  
  addOne(a);
  cout << a << endl;
  
  addOnePtr(&a);
  cout << a << endl;
  
  addOneRef(a);
  cout << a << endl;
  
  cout << b[2] << endl;
  cout << *(b + 2) << endl;
  
  cout << *b << endl;
  cout << b << endl;
  cout << &b[0] << endl;
  
  return(0);
}