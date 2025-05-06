#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cout << "ENter the no. of Roews and Columns you want" << endl;
    cin >> n >> m;

    int matrix[n][m];
    int TransposedMatrix[n][m];
    cout << "Now insert the matrix elements, mention you favourite Angel numbers " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "So, the entered Array Matrix is - " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    // For Printing the Transposed Matrices -
    cout << "So, the Transposed Matrices is " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            

            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}