void insertSort(vector<int> &arr)
{
    int n = arr.size();
    // insertion sort

    

    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int minindx = -1;
        // min value
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minindx = j;
            }
        }
        // Swapping minimum element from unsorted starting index
        swap(arr[i], arr[minindx]);// pure me se min dhundh k use first waaali value se swap kr do
    }
}

int main()
{
    int n;
    cout << "Vector Size" << endl;
    cin >> n;

    vector<int> arr(n);

    cout << "Mention the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertSort(arr);
    cout << "So, the sorted array using Insertion Sort is - " << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
