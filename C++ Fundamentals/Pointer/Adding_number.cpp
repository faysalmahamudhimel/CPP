#include <iostream>
using namespace std;

int main() {
    
    int x,y,*p1,*p2 ;

    cout<<"Enter two Number: ";
    cin>>x>>y ;

    p1 = &x ;
    p2 = &y ;

    int sum = *p1 + *p2 ;

    cout<<"The sum Is : " <<sum ;
    return 0;
}