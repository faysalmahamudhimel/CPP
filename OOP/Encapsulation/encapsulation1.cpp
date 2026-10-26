#include <iostream>
#include<string>
using namespace std;

class student{
  
   private : 
       
   string name ;
public: 

   void setname(string x)   //to set private private value
   {
       name = x ;
   }
 
   string getname()  // to get private values

   {
    return name ;

   }

};



int main() {



    student ob ;
  string name ;

    cout<<"Enter name : ";
    cin>>name ;

    //getline(cin, x);

    ob.setname(name) ;

    cout<<ob.getname() ;


    
   /* ob.setname("Himel") ;
    cout<<ob.getname() ;*/


    


    return 0;
}