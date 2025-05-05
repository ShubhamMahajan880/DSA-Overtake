#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
using namespace std;
int main()
{
    /*
    initialize a 2D Array -
    Standard Syntax -
    DATATYPE Name ARRAYNAME[No.of Row][No.ofColumn];
    */

    // int matrix[5][5];
    // matrix[1][2] = 10;
    // cout << matrix[1][2]; // 10
    // cout << endl;
    //    taking input manally for a single value
    // cin>>matrix[1][2];//75
    // cout<<matrix[1][2];//75

    // taking inputs for all the values of matrix -

    // int n,m;
    // cout<<"Enter the no. of rows and columns respectively"<<endl;
    // cin>>n>>m;
    // int matrix2[n][m];

    // cout<<"Now, enter the elements value"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin>>matrix2[i][j];
    //     }
    // }

    // // Printing the entered matrix -
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<matrix2[i][j]<<" ";
    //     }
    //     cout<<endl;

    // }
    /*
    Enter the no. of rows and columns respectively
    3 3
    Now, enter the elements value
    1 2 3 4 5 6 7 8 9
    1 2 3
    4 5 6
    7 8 9
    */
    // ____________ ____________ ____________ ____________ ____________

    // Qun2 - Print SUm of all elements in the matrix -

    // int n,m;
    // cout<<"Enter the no. of rows and columns respectively"<<endl;
    // cin>>n>>m;
    // int matrix2[n][m];

    // // taking input from user
    // cout<<"Now, enter the elements value"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin>>matrix2[i][j];
    //     }
    // }

    // // Printing the entered matrix -
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<matrix2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    //     int sum=0;

    // // Printing the sum of entered matrix -
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         sum+=matrix2[i][j];
    //     }
    // }
    // cout<<"So, the sum of entire matrix is - "<<sum<<endl;

    /*
Enter the no. of rows and columns respectively
3 3
Now, enter the elements value
1 2 3 4 5 6 7 8 9
1 2 3
4 5 6
7 8 9
So, the sum of entire matrix is - 45
    */
    // ____________ ____________ ____________ ____________ ____________

    // QUn 3 -check for the target element that it is present in the matrix or not, if present then print Yes.

    // int n, m;
    // cout << "Enter the no. of rows and columns respectively" << endl;
    // cin >> n >> m;
    // int matrix2[n][m];

    // // taking input from user
    // cout << "Now, enter the elements value" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> matrix2[i][j];
    //     }
    // }

    // // Printing the entered matrix -
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<matrix2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int target;
    // cout << "So, what's the targeted element - " << endl;
    // cin >> target;

    // // Printing the sum of entered matrix -
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (matrix2[i][j]==target)
    //         {
    //             cout<<"Yes it's present and the address is: row no-  "<<i<<" & column no-  "<<j<<" having targeted value-  "<<matrix2[i][j];
    //             return 0;
    //         }

    //     }
    // }
    // cout<<"Sorry, Element Not FOund Bruh.."<<endl;

    /*
    Enter the no. of rows and columns respectively
    3 3
    Now, enter the elements value
    1 2 3 4 5 6 7 8 9
    1 2 3
    4 5 6
    7 8 9
    So, what's the targeted element -
    6
    Yes it's present and the address is: row no-  1 & column no-  2 having targeted value-  6

    Enter the no. of rows and columns respectively
    3 3
    Now, enter the elements value
    1 2 3 4 5 6 7 8 9
    1 2 3
    4 5 6
    7 8 9
    So, what's the targeted element -
    15
    */

    // ____________ ____________ ____________ ____________ ____________

    // QUn 4 - Find the absolute difference of both diagonal elemenmts of a Matrix -

    // int rows, colms;
    // cout << "Enter the roes and column va;ues resprectively" << endl;
    // cin >> rows >> colms;

    // int matrix[rows][colms];
    // cout << "Enter the elements of matrix - " << endl;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < colms; j++)
    //     {
    //         cin >> matrix[i][j];
    //     }
    // }

    // cout << "So, youe entered matrix is - " << endl;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < colms; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int SumofDiagonal1 = 0;
    // int SumofDiagonal2 = 0;
    // // for principle diagonal elements sum - its sum of dialoganl1

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < colms; j++)
    //     {
    //         if (i == j)
    //         {
    //             SumofDiagonal1 += matrix[i][j];
    //         }
    //         if (i + j == rows - 1)
    //         {
    //             SumofDiagonal2 += matrix[i][j];
    //         }
    //     }
    // }
    // // For another dialognal sum -

    // cout << "So the sum of PDE is - " << SumofDiagonal1 << " and another diagonal is  " << SumofDiagonal2 << endl;
    // cout << "So, clearly the difference of both diagonals is -  " << abs(SumofDiagonal1 - SumofDiagonal2) << endl;
    // For the absolute difference using abs functin

    /*
    Enter the roes and column va;ues resprectively
    3 3
    Enter the elements of matrix -
    1 2 3 4 5 6 7 8 9
    So, youe entered matrix is -
    1 2 3
    4 5 6
    7 8 9
    So the sum of PDE is - 15 and another diagonal is  15
    So, clearly the difference of both diagonals is -  0
    */

    // ____________ ____________ ____________ ____________ ____________

    // Qun 5 - Find the sum of only boundary elements in the matrix -

    // int n, m;
    // cout << "Enter the no. of rows and columns respectively" << endl;
    // cin >> n >> m;
    // int matrix2[n][m];

    // // taking input from user
    // cout << "Now, enter the elements value" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> matrix2[i][j];
    //     }
    // }

    // // Printing the entered matrix -
    // cout<<"So, your inserted elements in matrix is - "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << matrix2[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // For Boundry ELemnets Sum -
    // // 📌 Logic - row & colm is max and min which is 0 and n-1,m-1

    // int boundary_sum = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
    //         {
    //             boundary_sum += matrix2[i][j];
    //         }
    //     }
    // }
    // cout<<"So the sum of all boundaries is - "<<boundary_sum<<endl;

/*
Enter the no. of rows and columns respectively
3 3 
Now, enter the elements value
1 2 3 4 5 6 7 8 9
1 2 3 
4 5 6 
7 8 9 
So the sum of all boundaries is - 40

Enter the no. of rows and columns respectively
3 4 
Now, enter the elements value
12 5 4 10 7 3 6 9 
1 2 5 3 4 7 6 9 8 
So, your inserted elements in matrix is - 
12 5 4 10 
7 3 6 9 
1 2 5 3 
So the sum of all boundaries is - 58
*/    

// ____________ ____________ ____________ ____________ ____________
// Qun 6 - 
}
