#include <iostream>
using namespace std;

int main() {
    

    int first =2 ,second = 1 ,num, i ,lucus;

    cin>>num ;

    for(i=1 ; i<=num; i++)
    {
        cout<<first<<" " ;

        lucus = first + second ;
        first = second ;
        second = lucus ; 
    }
    return 0;
}