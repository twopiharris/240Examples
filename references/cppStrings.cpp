//cppStrings.cpp
#include <iostream>

int main(){
    //C++ strings are objects, built into std namespace
    //very similar to Java String objects

    std::string fName("Bill");
    std::string lName("Bill");
    std::string name = fName + " " + lName;
    std::cout << name << std::endl;

    if (name == "Bill Gates"){
      std::cout << "Good to see you, " << fName << std::endl;
    } // end if

    if (fName == lName){
        std::cout << "They are the same value" << std::endl;
    } // end if

    if (&fName == &lName){
        std::cout << "They are the same variable" << std::endl;
    } // end if

      

    return 0;
} // end main
