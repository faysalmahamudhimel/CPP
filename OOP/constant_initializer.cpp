#include <iostream>
using namespace std;

class student{
 
  public:

     const int admissionfee ;
     const int  yearlycost ;   //const use for set constant value

     student(int x,int y )
     :admissionfee(x),yearlycost(y)           //: use for set const value
     { 

        
        cout<<admissionfee <<" "<<yearlycost ;

     }

};


int main() {

    student ob(1200 ,15300) ;
    
    return 0;
}