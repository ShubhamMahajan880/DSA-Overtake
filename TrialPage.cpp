#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size  -" << endl;
    cin >> n;

    int arr[n];
    cout << "What are the array elements - " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Hence the enterted arratybs is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + n);
    cout << "Hence the enterted arratybs is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Firrst max is - " << arr[0] << endl;
    cout << "last max is - " << arr[n - 1] << endl;

    int k;
    cout << "which max/min hyou want - " << endl;
    cin >> k;

    cout << k << "min is - " << arr[k - 1] << endl;
    cout << k << "max is - " << arr[n - k] << endl;
}
