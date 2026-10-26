#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int capital = 0, small = 0, digit = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            capital++;

        else if (str[i] >= 'a' && str[i] <= 'z')
            small++;

        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
    }

    cout << "Capital letters: " << capital << endl;
    cout << "Small letters: " << small << endl;
    cout << "Digits: " << digit << endl;

    return 0;
}