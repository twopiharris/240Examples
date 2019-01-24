//scopeRes.cpp

#include <iostream>
using namespace std;

//i is declared globally (outside any functions)
int i = 1;

main(){
    //i is also declared (with a different value) inside main!
    int i = 2;

    //what happens when we print out the value of i?
    std::cout << "local i: " << i << std::endl;

    //the local variable occludes (hides) the global

    //the :: operator resolves to the global scope
    std::cout << "global i: " << ::i << std::endl;
} // end main
