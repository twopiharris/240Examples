//istream.cpp
//istream special functions

#include <iostream>
#include <string>

using namespace std;

int main(){
  cout << "Get a single character: ";
  char c;
  cin.get(c);
  cout << "Your character: " << c << endl;
  cout << "Get a line at a time: " << endl;

  //clean out cin to remove previous values...
  //discard up to 80 characters or newline
  cin.ignore(80, '\n');

  cout << "Please enter your full name: ";

  string fullName;
  getline(cin, fullName);

  cout << "Hi there, " << fullName << endl;

  cout << "Press enter to continue: " << endl;
  cin.ignore();



  return 0;

} // end main

