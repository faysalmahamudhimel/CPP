#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    float n1,n2 ;

    cin>>n1>>n2 ;
     
    cout<<showpoint ; //to see point 

    cout<<fixed ; //sob gular pore dui ghor dekhabe 

    cout<<setprecision(2); //doshomik shoho total dekhabe 

    float sum = n1 +n2 ;
   
    cout<<setw(20)<<sum ; //front formatting 
     
    cout<<noshowpoint ; //to see no point 

    float division = n1-n2;
    cout<<endl ;
    cout<<setw(20)<<division ;

    return 0 ; 
}