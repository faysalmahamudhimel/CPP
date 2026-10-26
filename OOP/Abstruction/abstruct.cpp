#include <iostream>
using namespace std;


class student{
  public:

  virtual void massage()= 0   ; //called abstruction methode 
  };

  class person : public student{

          public: 
          void massage()
          {
            cout<<"kiya bak rahe ho moth****" <<endl;
          }


  };


  class man : public student{
             
       public:

       void massage()
       {
          cout<<"Pakar math***,oi pakar behenc***" ;
       }

  };

int main() {

        student *ob ;
        person ob1 ;
        man ob2 ; 

        ob = &ob1 ;

        ob->massage() ;

        ob = &ob2 ; 

        ob->massage() ;
     
          
    return 0;
}