//reference
//Using ampersand in declaration makes a REFERENCE (not quite a pointer)
//reference is another name for same exact memory space
//more convenient and safer than pointers

#include <iostream>

using namespace std;

main(){
  int i;
  int &j = i;

  //change j and i changes
  j = 5;
  cout << "i: " << i << endl;

  //change i and j changes
  i += 3;
  cout << "j: " << j << endl;
} // end main
