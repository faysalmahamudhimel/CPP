
#include <iostream>
using namespace std;

void value(int *num)
{
    *num = 10;
}

int main() {
    int num;
    num = 20;

    value(&num);  // To pass the address
    cout << num;
    

    return 0;
}
