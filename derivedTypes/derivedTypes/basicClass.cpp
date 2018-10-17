//basicClass.cpp

#include <iostream>
#include <string>

using namespace std;

class student {
    private:
        string name;
    public:
        void setName(string tName){
            name = tName;
        } // end setName

        string getName(){
            return name;
        } // end getName
}; // end class def
//don't forget semicolon at end of class def!


main(){
    student s1;
    s1.setName("John");
    cout << "Name: " << s1.getName() << endl;

} // end main
