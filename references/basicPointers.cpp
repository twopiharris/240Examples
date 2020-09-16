#include <cstdlib>
#include <iostream>

using namespace std;

main(){
  int normal = 7;
  cout << "normal: " << normal << endl;
  cout << "address of normal: "<< &normal << endl;

  int* pNormal = &normal;
  cout << "pNormal: " << pNormal << endl;
  cout << "value at pNormal " << *pNormal << endl;

} // end main
