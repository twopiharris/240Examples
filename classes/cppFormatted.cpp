//cppFormatted
//convert class to C++-style format

#include <iostream>
#include <string>

//using namespace std;

//begin with class prototype

class Student {
    private:
      std::string name;
    public:
      Student();
      Student(std::string);
      void setName(std::string);
      std::string getName();
}; // end class def

//functions defined seperate from class definition!
//note use of scope operator

Student::Student(){
  Student::name = "Anonymous";
} // end constructor

Student::Student(std::string name){
  Student::setName(name);
} // end overloaded constructor
 
//scope operator removes need for tName
void Student::setName(std::string name){
  Student::name = name;
} // end setName

std::string Student::getName(){
  return name;
} // end getName

main(){
  //classes can be instantiated without parameters
  //in C++, you must always provide a null parameter constructor
  //or one will be created for you.  

  Student s1;
  std::cout << s1.getName() << std::endl;
  s1.setName("John");
  std::cout << "Name: " << s1.getName() << std::endl;
  Student s2 ("Hepzibah");
  std::cout << s2.getName() << std::endl;

} // end main
