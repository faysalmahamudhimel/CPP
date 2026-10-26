
#include <iostream>
using namespace std;

int main()
{
    int A[5][5], i, j;
    int row, col;

    cout << "Enter the row and column of Matrix A: ";
    cin >> row >> col;

    // Input Matrix A
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }

        cout << endl;
    }

    cout << endl;
    cout << "Entered Matrix A" << endl;

    // Print Matrix A
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cout << A[i][j] << " ";
        }

        cout << endl;
    }

    int uppersum = 0, lowersum = 0;

    // Sum of Upper and Lower Triangle
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(i < j)
            {
                uppersum = uppersum + A[i][j];
            }

            if(i > j)
            {
                lowersum = lowersum + A[i][j];
            }
        }
    }

    cout << endl;
    cout << "Sum of Upper Triangle Elements = " << uppersum << endl;
    cout << "Sum of Lower Triangle Elements = " << lowersum << endl;

    return 0;
}
