//io.cpp

#include <iostream>
using namespace std;

int main(){
  int number;
  float real;
  string name;

  cout << "Please enter a number: " << endl;
  cin >> number;
  cout << "You said " << number << endl;

  cout << "Please enter a float: ";
  cin >> real;
  cout << "Your float is " << real << endl;

  cout << "Please type your name: ";
  cin >> name;
  cout << "Hi there, " << name << "!" << endl;

  cout << "Please enter your full name: ";
  //standard cin grabs only one string!
  //to get full line, clear buffer:
  cin.ignore();
  //then use the getline function
  getline(cin, name);
  cout << "Hi there, " << name << "!" << endl;

  cout << "Press ENTER to continue";
  cin.ignore();

}
