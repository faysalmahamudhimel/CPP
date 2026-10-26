#include <iostream>
using namespace std;
#include<string>

class student{

        public:
         string name ;

         student (string name)
         {
            this -> name = name ; // to remove confusing the constructors  variables
         }

         void display()
         {
            cout<<name ;
         }

};



int main() {

    student obj("Himel") ;
    obj.display();


    
    return 0;
}