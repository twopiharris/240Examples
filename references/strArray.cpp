//strArray.cpp
//examination of c-style strings as arrays

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

 main(){
  //A c-style string is actually an array of chars!
  //char name[4] = {'A', 'n', 'd', 'y'};

  //you can define a string directly as an array of chars
  //length does not need to be defined in this case
  char name[] = "Andy";
  cout << name << endl;

  //characters are available through array mechanism
  for (int i = 0; i < strlen(name); i++){
    cout << name[i] << endl;
  } // end for loop

  cout << endl << endl;

  //'dynamic' strings are null-terminated
  // '\0' is null character


  bool keepGoing = true;
  int i = 0;
  while (keepGoing){
    cout << name[i] << endl;
    i++;
    if (name[i] == '\0'){
      keepGoing = false;
    } // end if
  } // end while

  cout << endl << endl;

  //If null character is inserted in a c-style string,
  //you can have strange results
  char nickname[] = "andy\0oogieboogie";
  cout << nickname << endl;

  return 0;
} // end main

