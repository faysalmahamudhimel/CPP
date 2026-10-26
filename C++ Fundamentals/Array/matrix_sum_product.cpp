
#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], sum[10][10], product[10][10];
    int i, j, k;

    // Input size of first matrix
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    // Input size of second matrix
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Input first matrix
    cout << endl << "Enter elements of first matrix:" << endl;

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << endl << "Enter elements of second matrix:" << endl;

    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }

    // Matrix Sum
    if(r1 == r2 && c1 == c2)
    {
        cout << endl << "Sum of matrices:" << endl;

        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                sum[i][j] = A[i][j] + B[i][j];
                cout << sum[i][j] << " ";
            }

            cout << endl;
        }
    }
    else
    {
        cout << endl << "Matrix addition not possible" << endl;
    }

    // Matrix Product
    if(c1 == r2)
    {
        cout << endl << "Product of matrices:" << endl;

        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                product[i][j] = 0;

                for(k = 0; k < c1; k++)
                {
                    product[i][j] += A[i][k] * B[k][j];
                }

                cout << product[i][j] << " ";
            }

            cout << endl;
        }
    }
    else
    {
        cout << endl << "Matrix multiplication not possible" << endl;
    }

    return 0;
}
