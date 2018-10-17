//constPtr.cpp
//constants and pointers

#include <iostream>
using namespace std;

main(){
  const int x = 10;     //x is a constant object
  //x = 5;                //illegal! x cannot be changed

  //array of constant objects
  const int y[] = {1, 2, 3, 4};

  //strings are arrays of chars, so this works:
  const char* className = "CS23000";

  //since it's an array of constant objects,
  //individual elements cannot be changed:
  //className[0] = R;     //illegal!

  //however, the array itself is NOT constant!

  className = "Advanced Goofiness";

  cout << "class name: " << className << endl;

  //Make the array and the members constant with TWO const keywords

  const char* const lang = "C++";

  //now you have a true string constant
  //lang[0] = 'Q';    // illegal

  //lang = "Erlang";  // illegal

  //cout << "lang: " << lang << endl;

} // end main
