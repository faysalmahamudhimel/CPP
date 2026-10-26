#include <iostream>
using namespace std;

int main() {
      
     
    int year ;

    cout<<"Enter a Year: " ;
    cin>>year ; 

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
    {
        cout<<year <<" Is Leap Year " ;
    }

    else
    {
        cout<<year << " IS Not Leap Year" ;
    }

    return 0;
}