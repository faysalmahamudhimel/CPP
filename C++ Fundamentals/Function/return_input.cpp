#include <iostream>
using namespace std;

int sum(int a , int b)
{
    int sum = a + b ;
    return sum ;
}

int main() {
    
 int n1 , n2 ;
 cout<<"Enter two Number: " ;
 cin>> n1 >> n2 ;
 
 cout<<sum(n1 , n2) ;

 



    return 0;
}