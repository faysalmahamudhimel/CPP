#include<iostream>

using namespace std ;

int main()
{
    /* 1x2x3x4.......xn*/

    int i,n,result=1;
   cout<<"Enter a  positive number: ";
    cin>> n ;

    for(i=1;i<=n;i++)
    {
       result=result*i;
    }
   cout<<"THe multiply of"<<n<<" is:"<<result;
    return 0;
}