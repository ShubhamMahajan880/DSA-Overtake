#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size - " << endl;
    cin >> n;

    int arr[n];
    cout << "What are the arraay eleemnts  -" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "So, the entered elements are - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int expectedelement = arr[n / 2];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == expectedelement)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        cout << "Majority elements exists - " << expectedelement << endl;
    }
    else
    {
        cout << "No, majority elements available as of now" << endl;
    }
}