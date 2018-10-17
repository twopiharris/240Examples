//enum.cpp

//enums often used as constants based on integers
//used to clarify code.

#include <iostream>
using namespace std;

enum greek {alpha, beta, gamma};
enum number { one = 1, two, three };
enum boolean {False, True};

//Once you've created an enum, you can create a variable
//of that type. The value can be only one of the listed
//values, which corresponds to an integer.

main(){

    boolean x = False;
    if(x){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    } // end if
} // end main

