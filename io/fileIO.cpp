//fileIO.cpp

#include <fstream>
#include <iostream>
#include <string>

int main(){

  //opening a file for output
  std::ofstream outFile;
  outFile.open("example.dat");
  if (outFile.is_open()){
    outFile << "eggs" << std::endl;
    outFile << "milk" << std::endl;
    outFile << "bread" << std::endl;
    outFile.close();
  } else {
    std::cout << "unable to open file" << std::endl;
  } // end if

  //appending to a file
  std::ofstream appFile;
  appFile.open("example.dat", std::ios::app);
  appFile << "chips" << std::endl;
  appFile.close();

  //reading from a file
  // note last line will read as blank
  std::ifstream inFile;
  inFile.open("example.dat");
  std::string item;
  while (!inFile.eof()){
    std::getline(inFile, item);
    std::cout << "We need " << item << ", Dude." << std::endl;
  } // end while
  inFile.close();

  std::cout << std::endl << std::endl;

  // improve with a keepGoing loop

  inFile.open("example.dat"); 
  bool keepGoing = true;
  while (keepGoing){
    std::getline(inFile, item);
    if (inFile.eof()){
      keepGoing = false;
    } else {
      std::cout << "getting " << item << std::endl;
    } // end if
  } // end while
  inFile.close();

  std::cout << std::endl << std::endl;

  //alternate input
  inFile.open("example.dat");
  
  // getline returns false at end of file...
  // This line both reads in the current line and
  // acts as a condition

  while (getline(inFile, item)){
    std::cout << "Now we need " << item << std::endl;
  } // end while
  inFile.close();
  
  return 0;

} // end main
