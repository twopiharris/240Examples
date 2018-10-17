//basicClass.cpp

#include <iostream>
#include <string>

//using namespace std;

class Student {
    private:
        std::string name;
    public:
      // constructor
 
      Student(){
	name = "Anonymous";
      } // end constructor

      Student(std::string tName){
        name = tName;
      } // end overloaded constructor

      void setName(std::string tName){
        name = tName;
      } // end setName

      std::string getName(){
        return name;
      } // end getName
}; // end class def
//don't forget semicolon at end of class def!


main(){
    Student s1;
    std::cout << s1.getName() << std::endl;
    s1.setName("John");
    std::cout << "Name: " << s1.getName() << std::endl;
    Student s2 ("Hepzibah");
    std::cout << s2.getName() << std::endl;

} // end main
