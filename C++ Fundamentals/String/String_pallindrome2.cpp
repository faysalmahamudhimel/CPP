#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str, rev;

    cout << "Enter a string: ";

    //cin>>str ; accepted

         getline(cin,str) ;  //getline use for with apaces 

    rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}