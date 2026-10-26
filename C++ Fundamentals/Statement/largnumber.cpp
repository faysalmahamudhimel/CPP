#include <iostream>
using namespace std;

int main() {
    
    int n1,n2,n3 ;

    cout<<"Enter Three Number : "  ;
    cin>> n1>> n2 >> n3 ;

    if(n1>n2 && n1>n3)
    {
        cout<<"Large NUmber IS : "<< n1 ;
    }
    else if(n2>n1 && n2>n3)
    {
        cout<<"Large NUmber IS : "<< n2 ;
    }

    else
    {
        cout<<"Large NUmber IS : "<< n3 ;
    }


    return 0;
}