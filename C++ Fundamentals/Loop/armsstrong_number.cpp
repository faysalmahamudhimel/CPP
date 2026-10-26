#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, sum = 0;
                                                                    //153
    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (n > 0) {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (temp == sum) {
        cout << "Armstrong Number";
    } else {
        cout << "Not Armstrong Number";
    }

    return 0;
}