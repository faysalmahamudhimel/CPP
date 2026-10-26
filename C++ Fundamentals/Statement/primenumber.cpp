#include <iostream>
using namespace std;

int main() {
    
    int num ;
    int i ,count = 0 ;

    cout<<"Enter a Positive Number: " ;
    cin>>num ;

    if(num<=1)
    {
        cout<<"Not Prime Number" ;

    }

    else
    {
          for(i=2 ; i<num ; i++ )
          {
            if(num % i == 0)
            {
               count++ ;
               break;
            }
          }

          if(count == 0)
    {
        cout<<"Prime Number" ;

    }
    else
    {
        cout<<"Not Prime Number" ;
    }
    }

    

    return 0;
}