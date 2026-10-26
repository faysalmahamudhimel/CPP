#include <iostream>
using namespace std;

int main() {
    
      int num[] = {25,15,16,12,10,23} ;

      int num1 ; 
      cout<<"Enter Positive Integer: " ;
      cin>>num1 ;

      int i,pos = -1 ;

      for(i=0 ; i<6 ; i++)
      {
         if(num1 == num[i])
         {
            pos = i ;
            break; 
         }
      }

     if(pos == -1)
     {
      cout<<"Number Not found  " ;

     }

     else
    cout<<"The number is found at position: "<<pos ;
      


    return 0;
}