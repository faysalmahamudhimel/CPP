#include <iostream>
using namespace std;

int main() {
    
    try{           // use for where exception is occur

        
    float num1 ,num2 ;

    cout<<"Enter a Number: ";
    cin>>num1>>num2 ;

    if(num2 == 0)
    {
        throw 1;   // through any values fi condition is true
    }

    float result = num1 / num2 ;

    cout<<"The Result is: "<<result ;
    }

    catch(int x){           // can use ... for any data type
        cout<<"Division by zero is not posiable.Try again!" ;
    }

    return 0;
}