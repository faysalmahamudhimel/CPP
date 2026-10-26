#include <iostream>
using namespace std;

int main() {
    
    int i,n1,n2 ;
int gcd, lcm ;
    cout<<"Enter Two Numbers: " ;
    cin>>n1>> n2 ;

    for(i=1 ; i<=n1 && i<=n2 ; i++)
    {
            if(n1 % i == 0 && n2 % i == 0)
            {
                gcd = i ;
            }
    }

    cout<< "gcd: " << gcd<<endl ;

    lcm = (n1*n2)/gcd ;

    cout<<"Lcm: " << lcm ;

    return 0;
}