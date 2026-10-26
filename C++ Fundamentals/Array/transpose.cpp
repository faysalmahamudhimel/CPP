
#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10];
    int sum[10][10], product[10][10];
    int r1, c1, r2, c2, i, j, k;

    // Input size of matrices
    cout << "Enter rows and columns of A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of B: ";
    cin >> r2 >> c2;

    // Input Matrix A
    cout << endl << "Enter elements of A:" << endl;

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            cout << "A[" << i+1 << "][" << j+1 << "] = ";
            cin >> A[i][j];
        }

        cout << endl;
    }

    // Input Matrix B
    cout << "Enter elements of B:" << endl;

    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            cout << "B[" << i+1 << "][" << j+1 << "] = ";
            cin >> B[i][j];
        }

        cout << endl;
    }

    // Matrix Addition
    if(r1 == r2 && c1 == c2)
    {
        cout << "Sum of A and B:" << endl;

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
        cout << "Addition not possible" << endl;
    }

    // Matrix Multiplication
    if(c1 == r2)
    {
        cout << "Product of A and B:" << endl;

        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                product[i][j] = 0;

                for(k = 0; k < c1; k++)
                {
                    product[i][j] = product[i][j]
                                  + A[i][k] * B[k][j];
                }

                cout << product[i][j] << " ";
            }

            cout << endl;
        }
    }
    else
    {
        cout << "Multiplication not possible" << endl;
    }

    return 0;
}
