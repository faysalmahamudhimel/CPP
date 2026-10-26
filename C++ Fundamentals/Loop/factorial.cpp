#include <iostream>
using namespace std;

int main() {
    
   int i ,fact =1 ;
   int num ;
   cout<<"Enter a positive integer: " ;
   cin>>num ;

   for(i=1 ; i<=num; i++)
   {
     fact = fact * i ;
   }

   cout<<fact ;


    return 0;
}