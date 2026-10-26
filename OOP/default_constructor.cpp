#include <iostream>
using namespace std;

class student{
   
    public : 
    int id ;
    float cgpa ; 

    student(int x,float y )   //comstructor
{
    id = x ;
    cgpa = y ;
}


student() //default constructor 
{
    cout<<"My name is Himel" <<endl ;
}
void display()
{
    cout<<id <<" "<< cgpa ;
}


};


int main() {
         
    student hi ; //call to default constructor 

    student himel(24020 , 6.44) ;
       himel.display() ;
       
    return 0;
}