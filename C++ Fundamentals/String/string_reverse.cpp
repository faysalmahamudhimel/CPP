#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// String reverse using reverse()

int main()
{
    string str = "FAYSAL MAHAMUD";

    cout << str << endl;

    reverse(str.begin(), str.end());

    cout << str << endl;

    return 0;
}
