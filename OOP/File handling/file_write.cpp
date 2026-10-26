#include <iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
    
      
        
    string name ;

    ofstream file ;  //output file stream for write file 
    

    file.open("Student.txt",ios::out|ios::app) ;      //file opening   ios for adding new next 

    cout<<"Enter text: ";
    getline(cin,name) ;

    file<<"Welcome"<<" "<<name<<endl  ;   //write inside the file

    file.close() ;
         

    
      


    return 0;
}