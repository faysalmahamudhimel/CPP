#include <iostream>
using namespace std;

int main() {
    

    int x ;
     x = 10 ;

     int *p ;  //declar pointer
     p = &x ; //keep adress using ampersand

    cout<<x<<endl ;
    cout<<&x<<endl ;
    cout<<p<<endl ;  //for adress
    
    cout<<*p<<endl ; //for value


    return 0;
}