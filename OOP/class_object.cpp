#include <iostream>
using namespace std;
 

class student{

   public:

    int id ;
    
    void display()
    {
        cout<<id ;
    }


};

int main() {
      
    student himel ;
     himel.id = 24020 ;

       himel.display() ;


    return 0;
}