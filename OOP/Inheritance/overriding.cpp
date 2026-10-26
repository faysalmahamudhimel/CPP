#include <iostream>
using namespace std;


class student{


    public :

  

    void display()
    {
        cout<<"I am the boss" <<endl;
    }

    
    
};

class person : public student {  //inherite here student to person
            
    public:
             

              void display()
              {  
                cout<<"he is dr strange" ;
              }

};

int main() {
         
    student obj ;
    obj.display();

    person obj1 ;
     obj1.display() ;
    
    return 0;
}