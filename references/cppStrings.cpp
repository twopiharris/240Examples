//cppStrings.cpp
#include <iostream>

main(){
    //C++ strings are objects, built into std namespace
    //very similar to Java String objects

    std::string fName("Bill");
    std::string lName("Gates");
    std::string name = fName + " " + lName;
    std::cout << name << std::endl;

    if (name == "Bill Gates"){
      std::cout << "Good to see you, " << fName << std::endl;
    } // end if

} // end main
