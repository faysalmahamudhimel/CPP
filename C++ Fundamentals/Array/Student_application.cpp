#include <iostream>
using namespace std;

int main() {
    
  int i,num ;
  cout<<"Enter Number Of Student : " ;
  cin>>num ;

  int student[num] ;

  int sum = 0 ;

  
     for(i= 0 ; i<num ; i++)
     {
        cout<<"Enter The student data "<< i+1<<" = " ;
        cin>>student[i] ;

        sum = sum + student[i] ;
     }
    
     cout<<"Total Sum: " << sum <<endl;

     float avg = float(sum) / num ;

     cout<<"The avg of student : " <<avg <<endl;
 

     //to find  maximun and minimum 

     int max = student[0];
     int min = student[0] ;

     for(i=1 ; i<num ; i++)
     {
        if(max<student[i])
        {
            max = student[i] ;
        }

        if (min>student[i])
        {
            min = student[i] ;
        }
        
     }
     
     cout<<"Maximun Number: "<<max <<endl ;
     cout<<"Minimum Number: "<<min ;


    return 0;
}