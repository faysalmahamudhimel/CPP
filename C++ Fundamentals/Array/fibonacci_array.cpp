#include <iostream>
using namespace std;

int main() {
     
     int fibo[50] ;
     int i,num;

     cout<<"Enter a Number: " ;
     cin>>num ;

     fibo[0] = 0 ;
     fibo[1] = 1 ;

     for(i=2 ; i<num; i++)
     {
        fibo[i] = fibo[i-1] + fibo[i-2] ;
     }

     for(i=0 ; i<num; i++)
     {
        cout<<fibo[i] <<" " ;
     }
      

    return 0;
}