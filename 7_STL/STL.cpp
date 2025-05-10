#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
using namespace std;
int main()
{
// 📒 STL stands for Standard Template Library which prives an in-built functionality of already available functions, thods, techniques and libraroes.

//1 - Implementing STL for Binary Search
    int n;
    cout << "Mention the Array size" << endl;
    cin >> n;

    int arr[n];
    cout << "What are the elemenmts - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort
    sort(arr, arr + n);
    cout << "THe inserted array with sort elements is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int findelement;
    cout << "which element you want to get" << endl;
    cin >> findelement;

    // Binary Search -
    // Binary Search predefined functionality in STL -
    // binary_search(arr,arr+n,find) - for that eleemnt which we need to find.
    if (binary_search(arr, arr + n, findelement))
    {
        cout << "Yes, Element found at " << endl;
    }
    else
    {
        cout << "Not FOund" << endl;
    }

    /*
    Mention the Array size
    7
    What are the elemenmts -
    15 10 45 89 32 99 115
    THe inserted array with sort elements is -
    10 15 32 45 89 99 115
    which element you want to get
    99
    Yes, Element found at
    ----------------------
    Mention the Array size
    7
    What are the elemenmts -
    15 10 45 89 32 99 115
    THe inserted array with sort elements is -
    10 15 32 45 89 99 115
    which element you want to get
    75
    Not FOund
    */

// ____________ ____________ ____________ ____________ ____________

// 2 - using STL for unique and Non-repeating elements. 
/* If in array I need to delete the repeating elemnents and want oonly unique elements which also in 
sorted manner then it 's little bit complecated and having more complecxity, so using STL and pre defined functions */
//📒 SET - using SET data structure we can directly store the Non-repeating and unique characters 
//📒 VECTOR - Vector is also an array but specififcally it's an DYNAMIC ARRAY. A normal array is Static Array where size can't change for any operation of any element insertion or deletion, but in vector Array it's clearly possible 
//📒 MAP - Easy operations like count frequesncy
//📒 Queue -
//📒 Stack -

}
