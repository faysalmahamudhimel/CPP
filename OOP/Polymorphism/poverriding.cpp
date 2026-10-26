#include <iostream>
using namespace std;

class animal{

     public :
         
          virtual void sound()   //virtual for every uses
           {
               cout<<"cow is mooing" ;

           }

       };    

    class claf : public animal{

                 public:
                 void sound()
                 override {
                    cout<<"calf is bleating" ;
                 }

    };       




int main() {

    animal *k ;
   
    claf m ;

    k = &m ;
    k->sound() ;


    
    return 0;
}