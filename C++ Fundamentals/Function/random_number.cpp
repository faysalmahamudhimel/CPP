#include <iostream>
#include<stdlib.h> //for raandom number
using namespace std;

int main() {
    
  for(int i=1; i<=5 ; i++)
  {
    int random = rand() %10+1 ;  /* here modulus for random number range
                                    +1 for not howing  0  */

    cout<<random <<endl ;
  }

      
    return 0;
}