#include <iostream>
using namespace std;

void display(int num[] , int size)
{
    for(int i= 0 ; i<size ; i++)
    {
        cout<<num[i]<<" " ;
    }
}

int main() {
    
         
    
    int number[5] = {10,20,30,10,80} ;
     
    display(number,5) ; //first is array,second is array size

    return 0;
}