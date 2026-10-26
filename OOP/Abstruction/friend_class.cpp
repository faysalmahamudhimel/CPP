#include <iostream>
using namespace std;
#include<string.h>

class student{

    private :
          
          int id = 24020;
          string name ="Tamim";

    public:
           friend class person ;
};


class person{
    public:
         
        void display(student A)
        {
           cout<< A.id<<endl ;
            cout<<A.name ;
        }
};

int main() {

    student ob1 ;
    person ob2 ;

    ob2.display(ob1) ;


    
    return 0;
}