#include <iostream>

// swap.cpp
// demonstrates swapping with references

using namespace std;

void swap(int& a, int& b){
  int temp = a;
  a = b;
  b = temp;
} // end swap


int main(){
  int x = 3;
  int y = 5;

  cout << "BEFORE: " << endl;
  cout << "X: " << x << endl;
  cout << "Y: " << y << endl;

  swap(x, y);

  cout << "AFTER: " << endl;
  cout << "X: " << x << endl;
  cout << "Y: " << y << endl;
  return(0);
} // end main
