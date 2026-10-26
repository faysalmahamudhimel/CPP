// 1^2+2^2+.......+n^2

#include<iostream>
using namespace std ;;;

int main()
{
    int i,n,sum=0;

    cout<<"Enter Number: ";
  cin>> n ;
    for(i=1;i<=n;i++)
    {
        sum= sum + i*i;

    }
     cout<<"The Of Scqure is :" <<sum;
    return 0;

}