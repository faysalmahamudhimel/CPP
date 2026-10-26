#include <iostream>
using namespace std;

int main() {
int row1,row2 ,col1,col2 ;

cout<<"Enter First matrix Row and coloum: " ;
cin>>row1 >> col1 ;

cout<<"Enter Second matrix  Row and coloum: " ;
cin>>row2 >> col2 ;

int i , j ,k,l ;
 
int A[50][50] ;
int B[50][50] ;
int sum[50][50] ; 
//2nd matrix 

if(row1==row2 && col1==col2)
{

    //input matrix 1
for(i=1; i<=row1 ; i++)
{
    for(j=1; j<=col1 ; j++)
    {   
        cout<<"Enter Elements A[" << i <<"][" << j <<"] : " ;
        cin>>A[i][j] ;
    }

    cout<<endl ; 

}

//print matrix 1  

for(i=1 ; i<=row1 ; i++)
{
    for(j=1 ; j<=col1 ; j++)
    {
        cout<<A[i][j]<<" " ;
    }

    cout<<endl ;
}

//input matrix 2
for(k=1; k<=row2 ; k++)
{
    for(l=1; l<=col2 ; l++)
    {   
        cout<<"Enter Elements B[" << k <<"][" << l <<"] : " ;
        cin>>B[k][l] ;
    }

    cout<<endl ; 

}

//print matrix 2

for(k=1 ; k<=row2 ; k++)
{
    for(l=1 ; l<=col2 ; l++)
    {
        cout<<B[k][l]<<" " ;
    }

    cout<<endl ;
}

//Sum of two matrix

    for(i=1 ; i<=row1 ; i++)
{
    for(j=1 ; j<=col1 ; j++)
    {
        sum[i][j]= A[i][j] + B[i][j] ; 
    }    
}

//print sum 
cout<<endl ;

cout<<"The SUM of A + B = " <<endl;

for(i=1 ; i<=row1 ; i++)
{
    for(j=1 ; j<=col1 ; j++)
    {
        cout<<sum[i][j]<<" " ;
    }

    cout<<endl ;
}
}
else
{
    cout<<"Addition is not posiable" ;
}



    return 0;
}