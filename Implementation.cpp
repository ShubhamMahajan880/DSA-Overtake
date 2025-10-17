#include <bits/stdc++.h>
using namespace std;

void QuickSort(int arr[], int st, int end)
{
    if (st >= end)
    {
        return;
    }
    int pivotIndx = Partition(arr, 0, end);
    QuickSort(arr, st, pivotIndx - 1);
    QuickSort(arr, pivotIndx + 1, end);
}
int Partition(int arr[], int st, int end)
{
    int i = st - 1;
    int pivot = arr[end];

    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[end]);
    return i;
}
void printArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n = 7;
    int arr[n] = {56, 89, 45, 78, 12, 2, 56};

    QuickSort(arr, 0, n - 1);
    printArray(n, arr);
}