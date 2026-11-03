#include <iostream>
using namespace std;
#include<array>  //for stl libreary 
#include<algorithm>

#include<numeric> //for accumulated 

void printarray(const array<int,5>&arr)
{
    for(int value : arr)
    {
        cout<<value << " " ;
    }
} 



int main() {

    int number[] = {1,2,3,4,5} ;

    array<int,5> a = {6,7,8,9,0} ;  //declear stl array

    array<int,5>b;

    cout<< number[3]<<endl  ;
    cout<< a[3]<<endl  ;

    cout<<"Size of array : "<<a.size()  <<endl ;  // for stl sizing 

    //printing array 

    for( int i=0 ; i<a.size(); i++)
    {
        cout<<a[i]<<" " ;
    }

    cout<<endl<<"STL Array" <<"\n" ; 

    //for atl loop 



    for(int value: a)
    {
        cout<<value<<" " ;
    }

    //front(),back(),

    cout<<endl;

    cout<<a.front()<<" "<<a.back() <<endl;  //for first and last elements 
        
//for empaty array 

if(a.empty()){

    cout<<"Array is empty"<<endl;
}

else{

    cout<<"The array is not empty"<<endl ;
}

//sorting

sort(a.begin(),a.end()) ;

//print sort value
cout<<"sorted value"<<endl;

for(int value: a)
{
    cout<<value<<" ";
}


cout<<"After fill"<<endl;

//for fill use to set the value to zero 


 //a.fill(0) ;

 /*for(int value: a)
 {
    cout<< value<<" " ;
 }*/


 a[2] = 4 ;
 a.at(2) = 30 ; 
 cout<<"Value: "<<a[2] <<endl ;

 b.swap(a) ;

 for(int swapp: b) 
 {

    cout<<swapp<<" " ;

 }

 //sum of array using stl 

 int sum = accumulate(b.begin(),b.end(),0);

 cout<< "The sum is : "<< sum<<endl  ; 


    printarray(b) ;


    
    return 0;
}