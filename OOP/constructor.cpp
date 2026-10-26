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

void display()
{
    cout<<id <<" "<< cgpa ;
}


};


int main() {
         
    student himel(24020 , 6.44) ;
       himel.display() ;
       
    return 0;
}