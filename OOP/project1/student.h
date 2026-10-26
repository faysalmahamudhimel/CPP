//#ifndef STUDENT_H
//#define STUDENT_H

#pragma once 
#include<iostream>

using namespace std ;
class student{
    
    public :
       
        int id  ;
        int age ;
        
        student(int x ,int y)
        {
            id = x ;
            age = y ;
        }

        void display()
        {
            cout<<id<<" "<<age ;
        }


};


//#endif