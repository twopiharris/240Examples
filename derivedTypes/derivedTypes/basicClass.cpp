//basicClass.cpp

#include <iostream>
#include <string>

using namespace std;

class student {
    private:
        std::string name;
    public:
        void setName(std::string tName){
            name = tName;
        } // end setName

        std::string getName(){
            return name;
        } // end getName
}; // end class def
//don't forget semicolon at end of class def!


main(){
    student s1;
    s1.setName("John");
    std::cout << "Name: " << s1.getName() << std::endl;

} // end main
