#include <iostream>
using namespace std;

int main() {
    
   int num , i ,count = 0 ;

   cout<<"Enter Number: " ;
   cin>>num ;

   if(num<=1)
   {
     cout<<"Not Prime Number" ;
   }

   else
   {
     for(i=2 ; i<num ; i++)
     {
        if(num % i == 0)
        {
            count++ ;
        }
     }

     if(count == 0)
     {
        cout<<"Prime Number" ;
     }

     else{
        cout<<"Not prime number" ;
     }

   }

    return 0;
}