#include <iostream>
#include<stdlib.h>

using namespace std;

int main() {
    
        int num , random ;

     while (1)
     {
        cout<<endl ;
        cout<<"Enter the Guess Number Between 1 to 5 : "  ;
     cin>>num ;

     random = rand() % 5 +1 ;

     if(num==random)
     {
        cout<<"congratulationsn You Won the Game "<<endl ;
     }
     else
     {
        cout<<"You are too close! Try Again !!" <<endl ;
        cout<<"The Guess Number Is : "<<random <<endl ;
        
     }
     }
     
    
    return 0;
}