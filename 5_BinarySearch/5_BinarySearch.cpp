#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
using namespace std;
int main()
{
    // Binary Search Concept - Conditionn - Must be for Sorted Arraay only.  All elem,ents /w Lfet and ight is known as Search Space

    // int n;
    // cout << "Enter the size of array - ";
    // cin >> n;

    // int arr[n];
    // cout << "MEntion the array values you want tot inserett - " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << endl;
    // cout << "So, your enteres aray is - " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int targetelement;
    // cout << "Now, let me knw what is your Targeted Element" << endl;
    // cin >> targetelement;

    // // Bianry Search process -
    // int left = 0, right = n - 1;
    // while (left <= right)
    // {
    //     int mid = (left + right) / 2;
    //     if (arr[mid] == targetelement)
    //     {
    //         cout << "Element is here and found at - " << " " << mid << endl;
    //         return 0;
    //     }
    //     else if (arr[mid]>targetelement)
    //     {
    //         right = mid-1;
    //     }
    //     else
    //     {
    //         left = mid+1;
    //     }
        
    // }
    // cout<<"Element not found braddy"<<endl;

/*
Enter the size of array - 7
MEntion the array values you want tot inserett - 
1 2 3 4 5 6 7
So, your enteres aray is - 
1 2 3 4 5 6 7 
Now, let me knw what is your Targeted Element
5
Element is here and found at -  4

Enter the size of array - 7
MEntion the array values you want tot inserett - 
1 2 3 4 5 6 7
So, your enteres aray is -
1 2 3 4 5 6 7
Now, let me knw what is your Targeted Element
8
Element not found braddy

Enter the size of array - 10
MEntion the array values you want tot inserett - 
89 78 45 56 12 23 32 21 65 99
So, your enteres aray is -
89 78 45 56 12 23 32 21 65 99
Now, let me knw what is your Targeted Element
12
Element is here and found at -  4
*/

// T.C - of BS  is given by (log n). For n operations juts half - because either in Ight or in Left

// ____________ ____________ 

// Binary Search for the decreasing oder of array elements - 
      int n;
    cout << "Enter the size of array - ";
    cin >> n;

    int arr[n];
    cout << "MEntion the array values you want tot inserett - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "So, your enteres aray is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int targetelement;
    cout << "Now, let me knw what is your Targeted Element" << endl;
    cin >> targetelement;

    // Bianry Search process -
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == targetelement)
        {
            cout << "Element is here and found at - " << " " << mid << endl;
            return 0;
        }
        else if (arr[mid]>targetelement)
        {
            left = mid+1;
            
        }
        else
        {
            right = mid-1;
        }
        
    }
    cout<<"Element not found braddy"<<endl;

/*
Enter the size of array - 7
MEntion the array values you want tot inserett - 
7 6 5 4 3 2 1
So, your enteres aray is - 
7 6 5 4 3 2 1 
Now, let me knw what is your Targeted Element
3
Element is here and found at -  4

Enter the size of array - 7
MEntion the array values you want tot inserett - 
7 6 5 4 3 2 1
So, your enteres aray is -
7 6 5 4 3 2 1
Now, let me knw what is your Targeted Element
6
Element is here and found at -  1

Enter the size of array - 7
MEntion the array values you want tot inserett - 
7 6 5 4 3 2 1
So, your enteres aray is -
7 6 5 4 3 2 1
Now, let me knw what is your Targeted Element
56
Element not found braddy
*/
}



