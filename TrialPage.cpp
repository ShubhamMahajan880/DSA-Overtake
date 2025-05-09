#include <bits/stdc++.h>
using namespace std;

int main()
{

    
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

    // sort(arr, arr+n);Sorting the array because what if user coudn;t privde us a sorted arrayu
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
