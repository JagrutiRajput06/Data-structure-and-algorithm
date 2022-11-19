#include <iostream>
using namespace std;

int main() 
{

    int r1, r2, c1, c2, i, j, k;

    int m1[10][10], m2[10][10], prod[10][10];

    cout << "Enter the number of Rows and Columns of first matrix : ";
    cin >> r1 >> c1;

    cout << "Enter the number of Rows and Columns of second matrix : ";
    cin >> r2 >> c2;

    if (c1 == r2) 
    {
        cout << "Enter the " << r1 * c1 << " elements of first matrix : ";

        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) 
            {
                cin >> m1[i][j];
            }
        }

        cout << "Enter the " << r2 * c2 << " elements of second matrix : ";

        for (i = 0; i < r2; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                cin >> m2[i][j];
            }
        }

        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                prod[i][j] = 0;

                for (k = 0; k < c1; k++)
                    prod[i][j] = prod[i][j] + (m1[i][k] * m2[k][j]);
            }
        }

        cout << "\nThe first matrix is : \n";

        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++) 
            {
                cout << m1[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "\nThe second matrix is : \n";

        for (i = 0; i < r2; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                cout << m2[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "\nThe Product matrix is : \n";

        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                cout << prod[i][j] << "  ";
            }
            cout << endl;
        }

    } 
    else 
    {
        cout << "Matrix is incorrect";
    }

    cout << endl;

    return 0;
}