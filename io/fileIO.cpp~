//fileIO.cpp

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){

  //opening a file for output
  ofstream outFile;
  outFile.open("example.dat");
  if (myfile.is_open()){
    outFile << "eggs" << endl;
    outFile << "milk" << endl;
    outFile << "bread" << endl;
    outFile.close();
  } else {
    cout << "unable to open file" << endl;
  } // end if

  //appending to a file
  ofstream appFile;
  appFile.open("example.dat", ios::app);
  appFile << "chips" << endl;
  appFile.close();

  //reading from a file
  ifstream inFile;
  inFile.open("example.dat");
  string item;
  while (!inFile.eof()){
    getline(inFile, item);
    if (item != ""){
      cout << "We need " << item << ", dude." << endl;
    } // end if
  } // end while
  inFile.close();

  return 0;
} // end main
