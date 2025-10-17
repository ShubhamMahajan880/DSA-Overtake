#include <bits/stdc++.h>
using namespace std;

void MergeSort(int arr[], int st, int end)
{
    if (st >= end)
    {
        return;
    }
    int mid = st + (end - st) / 2;
    MergeSort(arr, st, mid);
    MergeSort(arr, mid + 1, end);
    Merge(arr, st, mid, end);
}
void Merge(int arr[], int st, int mid, int end)
{
    vector<int> temp;
    int i = st;
    int j = mid + 1;
    if (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid) // For left
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end) //// Similarly for Right -
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int i = st, x = 0; i <= end; i++)
    {
        arr[i] = temp[x++]; //// Printing original sorted array via copying elements from temp
    }
}
int printArray(int n, int arr[])
{
    cout << "So, the sorted array we got is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 7;
    int arr[n] = {23, 56, 8, 12, 45, 78, 99};

    MergeSort(arr, 0, n - 1);
    printArray(n, arr);
}
