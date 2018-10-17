/* HighLowRecurse.cpp
   solves the 'human number'
   high low problem with recursion
*/

#include <iostream>

using namespace std;

void hlRecurse(int lower, int upper);

int main(){
 hlRecurse(0, 100);
}

// Use recursion instead of looping
void hlRecurse(int lower, int upper){
  char input;
  int mid = (int)((lower + upper)/2);
  cout << "I guess " << mid << endl;
  cout << "too (h)igh?" << endl;
  cout << "too (l)ow?" << endl;
  cout << "or (c)orrect?" << endl;
  cin >> input;
  
  if (input == 'h'){
    hlRecurse(lower, mid);    
  } else if (input == 'l'){
    hlRecurse(mid, upper);
  } else if (input == 'c'){
    // do nothing. base case
    cout << "You win!" << endl;
  } else {
    cout << "that is not a valid response" << endl;
    hlRecurse(lower, upper);
  } // end if
}
