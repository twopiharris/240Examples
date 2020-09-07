//ptrArray.cpp
//pointers and arrays

#include <cstdlib>
#include <iostream>

using namespace std;
const int SIZE = 3;

main(){
  int score[] = {3, 2, 4};

/*
    alternate way to fill array

      int score[SIZE];
      score[0] = 3;
      score[1] = 2;
      score[2] = 4;
*/

  for (int i = 0; i < SIZE; i++){
    cout << i << ": " << score[i] << endl;
  } // end for loop

  //the array variable is actually a pointer to the first element!
  cout << "score: " << score << endl;
  cout << "*score: "  << *score << endl;
  cout << "*(score + 1): " << *(score + 1) << endl;


}  // end main


