#include <iostream>
using namespace std;

int main() {
    
    int num, rev = 0,digit,count = 0 ;

    cout<<"Enter Number: " ;
    cin>>num ;

    while(num>0)
    {
         digit = num % 10 ;
          
         rev = rev * 10 + digit ;

         num = num / 10 ;
         count++ ;
    }

    cout<<"The Reverse  Number IS : "<<rev <<endl; 
    cout << "Total digits = " << count;


    return 0;
}