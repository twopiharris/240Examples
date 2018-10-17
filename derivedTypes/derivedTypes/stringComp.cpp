#include <iostream>

using namespace std;

int main(){

  //alpha and beta are same value but different memory
  //gamma is a reference to beta (same memory location)
  //delta is different content and different location

  string alpha = "a string";
  string beta = "a string";
  string &gamma = beta;
  string delta = "another string";

  // == operator acts (somehow) as expected
  if (alpha == beta){
    cout << "== operator true on same content" << endl;
  } 

  //compare works like c strcmp (0 for same content)
  if (alpha.compare(beta) == 0){
    cout << "compare is true" << endl;
  }

  // now check completely different strings
  if (alpha == delta){
    cout << "== operator true" << endl;
  } else {
    cout << "== operator false" << endl;
  } // end if

  //to check for memory location, compare addresses
  if (&alpha == &gamma){
    cout << "Addresses are the same" << endl;
  } else {
    cout << "Addresses are different" << endl;
  } 

  if (&beta == &gamma){
    cout << "Addresses are the same" << endl;
  } else {
    cout << "Addresses are different" << endl;
  } 

} // end main
