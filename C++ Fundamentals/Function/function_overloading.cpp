#include <iostream>
using namespace std;

void sum(int a,int b)
{
     int sum = a + b ;
     cout<<sum <<endl;
}

void sum(int a, int b , int c)
{
    int sum = a + b + c ;
    cout<<sum ;
}


int main() {
    

     sum(50,56) ;
     sum(56,50,30) ;
    return 0;
}