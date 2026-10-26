#include <iostream>
using namespace std;

int main() {
    
    int A[20][20] ,i,j,sum = 0 ;
    int row,col ;

    cout<<"Enter number of rows and coloums: " ;
    cin>>row >> col ;

    for(i=0 ; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"Enter elements of A["<<i+1<<"]["<<j+1<<"] : " ;
            cin>>A[i][j] ; 
        }

        cout<<endl ;
    }

    //pinrt matrix A
cout<<"Matrix A: "<<endl ;
     for(i=0 ; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            cout<<A[i][j]<<" " ;
           
        }
        cout<<endl ;
      
    }

    //sum of diagonal elements 

    
        for(i=0 ; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
           if(i==j) 
           {
              sum = sum + A[i][j] ;

           }   
          
           
        }
      
    }

    

    cout<<"The Sum of Diagonal elements is : "<<sum ;



    return 0;
}