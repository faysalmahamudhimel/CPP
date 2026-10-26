#include<iostream>
using namespace std ;
#include "student.h" ;

int main()
{
    student ob1(240,25) ;

         student *p = &ob1 ;   //using pointer 
         p ->display() ;         // selection for access methode   
     
    return 0 ;
}

