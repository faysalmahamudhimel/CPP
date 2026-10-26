#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Name = "FAYSAL HIMEL";

    int i;
    i = 0;

    while (i < Name.length())
    {
        cout << Name[i] << endl;
        i++;
    }

    return 0;
}