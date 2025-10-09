#include <bits/stdc++.h>
using namespace std;

void transposedMatrix(int n, int m, int matrix[100][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    cout << "So, the Transposed Matrix is - " << endl;
}

void MatrixRightRotationNinteeDegree(int n, int m, int matrix[100][100])
{   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m / 2; j++)
        {
            swap(matrix[i][j], matrix[i][m - j - 1]);
        }
    }
    cout << "The 90 Degree CW Rotated Array is - " << endl;
}

void MatrixLeftRotationNinteeDegree(int n, int m, int matrix[100][100])
{
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            swap(matrix[i][j], matrix[n - i - 1][j]);
        }
    }

    cout << "& 90 Degree ACW Rotated Array is - " << endl;
}

void printMatrix(int n, int m, int matrix[100][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m;
    cout << "Enter the row and column" << endl;
    cin >> n >> m;

    int matrix[100][100];
    cout << "What are the matrix elements - " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Entered matrix elements are - " << endl;
    printMatrix(n, m, matrix);

    transposedMatrix(n, m, matrix);
    printMatrix(n, m, matrix);

    MatrixRightRotationNinteeDegree(n, m, matrix);
    printMatrix(n, m, matrix);

    MatrixLeftRotationNinteeDegree(n, m, matrix);
    printMatrix(n, m, matrix);
}