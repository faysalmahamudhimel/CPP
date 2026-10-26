#include <iostream>
using namespace std;

int main() {
    

    int first = 0 ,second = 1 ,fib , i ;
    int num ;

    cout<<"Enter Range: " ;
    cin>>num ;

    for(i=1; i<=num ; i++)
    {
        cout<<first<<" " ;

        fib = first + second ;
        first = second ;
        second = fib ;
    }

    return 0;
}