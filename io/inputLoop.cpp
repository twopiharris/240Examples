//input loop
#include <iostream>


//std::cin returns 0 at end of file

main(){
  int count = 0;
  int total = 0;
  int grade = 0;
  double average = 0;

  std::cout << "enter a grade: (ctl-D to exit)";
  while (std::cin >> grade){
    count++;
    total += grade;
    std::cout << "enter a grade: ";
  } // end while

  average = total / count;
  std::cout << "average: "  << average;
} // end main

