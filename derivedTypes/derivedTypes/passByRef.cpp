#include <iostream>

using namespace std;

void addOne(int beta){
  beta++;
} // end addOne

void addOneByRef(int &beta){
  beta++;
} // end addOneByRef

int main(){

  int alpha = 5;
  addOne(alpha);
  cout << "after addOne, alpha is " << alpha << endl;

  addOneByRef(alpha);
  cout << "after passing reference, alpha is " << alpha << endl;

} // end main
  

