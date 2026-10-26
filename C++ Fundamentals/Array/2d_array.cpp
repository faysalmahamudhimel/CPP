#include <iostream>
using namespace std;

int main() {
int row ,col ;

cout<<"Enter Row and coloum: " ;
cin>>row >> col ;
int i , j ;
 
int A[50][50] ;

for(i=1; i<=row ; i++)
{
    for(j=1; j<=col ; j++)
    {   
        cout<<"Enter Elements A[" << i <<"][" << j <<"] : " ;
        cin>>A[i][j] ;
    }

    cout<<endl ; 

}

//print 2d array 

for(i=1 ; i<=row ; i++)
{
    for(j=1 ; j<=col ; j++)
    {
        cout<<A[i][j]<<" " ;
    }

    cout<<endl ;
}
    return 0;
}