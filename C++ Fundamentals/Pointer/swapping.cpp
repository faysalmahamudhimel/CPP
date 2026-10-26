#include <iostream>
using namespace std;

void swap(int *n1 , int *n2)
{
    int temp ;

    temp = *n1 ;
    *n1 = *n2 ;
    *n2 = temp ;
}


int main() {
    
    int x ,y ;

   cout<<"Enter two Numbers: ";
   cin>> x >> y ;

   cout<<"Before swapping: " << "X = "<<x <<" Y = "<< y <<endl ;

   swap(&x , &y) ;

   cout<<"After swapping: "<<"X = "<<x <<" Y = "<< y ;



    return 0;
}