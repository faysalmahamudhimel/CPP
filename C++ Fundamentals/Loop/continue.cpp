#include <iostream>
using namespace std;

int main() {
    

    int i ;

    for (i=1 ; i<=20 ; i++)
    {
        if(i==10){  //ekhan theke 10 ke bipas kore disse
            
            continue; 
        }

        cout<< i <<endl ;
    }
    return 0;
}