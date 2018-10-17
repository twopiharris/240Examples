//basicStruct.cpp

//structs are like classes
//only public members
//can have different types
//all members have names
//available in C and C++

#include <iostream>
#include <string>

using namespace std;

struct date{
  int day;
  string month;
  int year;
};

main(){
    date today;
    today.day = 2;

    today.month = "Sep";
    today.year = 2010;

    cout << "Day: " << today.day
         << ", Month: " << today.month
         << ", Year: " << today.year << endl;
} // end main
