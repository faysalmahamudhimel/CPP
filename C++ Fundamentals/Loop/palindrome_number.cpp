#include <iostream>
using namespace std;

int main() {
    
    int temp , n , digit,rev= 0 ;
         
    cout<<"Enter Number: ";
    cin>>n;

    temp = n ;

    while(n>0)
    {
        digit = n % 10 ;
        rev = rev * 10 + digit ;
        n= n / 10 ;
    }

    if(temp == rev )
    {
        cout<<"The Number Is palindrome Number" ;
    }
    else
    cout<<"The number is not palindrome " ;




    return 0;
}