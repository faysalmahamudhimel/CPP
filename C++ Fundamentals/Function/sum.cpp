#include <iostream>
using namespace std;

void sum(int a , int b)
{
    int sum = a + b ;
    cout<<sum ;
}

int main() {
    
 int n1 , n2 ;
 cout<<"Enter two Number: " ;
 cin>> n1 >> n2 ;
 
 sum(n1 , n2) ;

 



    return 0;
}