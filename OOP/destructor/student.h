

#pragma once 
#include <iostream>

class student{

public:
    student();
    ~student();
};

inline student::student()
{
    std::cout << "I am the boss\n";
}

inline student::~student()
{
    std::cout << "student object destroyed\n";
}
