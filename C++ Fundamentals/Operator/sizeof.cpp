#include <iostream>
using namespace std;

int main() {
    
    int a ;
    float b ;
    double c ;
char name[20] ;
    string d ;

    int f = sizeof(name) ;

    cout<<f<<endl ;

    int x ,y,z ;

    int sum = (x=10 ,y=20,z=x+y) ; //comma operator 

    cout<<sum<<endl ;


    return 0;
}