#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "BANGLADESH" ;
    string str2 = "PAKISTHAN" ;
    string temp ;
    
    cout << "Before swapping"<<endl;

    cout << "String1 = " << str1 << endl;
    cout << "String2 = " << str2;

    temp = str1;
    str1 = str2;
    str2 = temp;

    cout << "After swapping"<<endl;
    
    cout << "String1 = " << str1 << endl;
    cout << "String2 = " << str2;

    return 0;

}
