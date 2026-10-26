#include <iostream>
using namespace std;
#include<string>

class student{


    public :

    int age ;
    int id  ;

    
    
};

class person : public student {  //inherite here student to person
            
    public:
              string name ;

              void display()
              {
                cout<<name << endl ;
                cout<<id << endl ;
                cout<<age << endl ;
              }

};

int main() {

   person obj ;  //create subclass object 
      obj.id = 101 ;
      obj.age = 20 ;

      obj.name = "Himel" ;

      obj.display() ;
    
    return 0;
}