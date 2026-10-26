#include <iostream>
using namespace std;

int x = 10 ;  //global variable


int main() {
     

    int x = 20 ; 

    cout<< ::x <<endl  ;  // : : call scope resolution link to global variable
    cout<< x ; 
    return 0;
}