#include <iostream>
using namespace std;

int main() {
    
     int num1,num2 ;

     char op ;

    cout<<"Enter Expression +, - ,* ,/ : "  ;
    cin>> op ; 

    cout<< "Enter Two Number : "  ;
    cin>> num1 >> num2 ;

    switch (op)
    {
    case '+' : cout<< num1 + num2 ;
           break;

    case '-' : cout<< num1 - num2 ;
           break;

    case '*' : cout<< num1 * num2 ;
           break;

    case '/' : cout<< num1 / num2 ;
           break;
    
    default:
    cout<<"Invalid Number" ;
        break;
    }


 







    return 0;
}