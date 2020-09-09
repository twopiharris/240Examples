#include <iostream>


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
  
  std::cout << a << std::endl;
  
  std::cout << &a << std::endl;
  
  std::cout << *ptrA << std::endl;
  
  addOne(a);
  std::cout << a << std::endl;
  
  addOnePtr(&a);
  std::cout << a << std::endl;
  
  addOneRef(a);
  std::cout << a << std::endl;
  
  std::cout << b[2] << std::endl;
  std::cout << *(b + 2) << std::endl;
  
  std::cout << *b << std::endl;
  std::cout << b << std::endl;
  std::cout << &b[0] << std::endl;
  
  return(0);
}
