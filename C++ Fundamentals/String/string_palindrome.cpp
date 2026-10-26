#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1 = "MADAM" ;
    string name2 = "MADAM" ;
    
    int len = name2.length();
    for (int i = 0; i < len / 2; i++)
    {
        char temp = name2[i];
        name2[i] = name2[len - 1 - i];
        name2[len - 1 - i] = temp;
    }  //string reverse

    int r = (name1 == name2) ;  //string compare
    
  if(r==0)  //check palindrome or not 
  {
    cout << "ThE String is Palindrome";
  }

  else
  {
    cout << "The String is Not Palindrome";
  }

  return 0;
  


}
