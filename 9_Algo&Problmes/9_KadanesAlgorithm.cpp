#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
// #include<vector>
// #include<set>
using namespace std;
int main()
{

    // Qun - Print Maximum sum of SubArray. Coondition - Sub-array must not be empty -
    // int n;
    // cout << "size of array - " << endl;
    // cin >> n;

    // vector<int> arr(n);
    // cout << "Give elements of array  - " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // // Maximum subarray sum -
    // int ans = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];
    //         ans = max(ans, sum);
    //     }
    // }
    // cout<<ans<<endl;

    /*
    size of array -
    5
    Give elements of array  -
    1 4 -7 11 5
    16

    T.C - here the time complexity is - O(n*n = n^2)
     */
    // ____________ ____________
    // Kadane's ALgorithms -
    // So, for decreasing this much complexity using Kadane's ALgotihms - Acc. ot this aalgorithm don;t addd to those elements which is negative , leave the sum zero, and incldue only possitive numbers sum
    int n;
    cout << "vector size - ";
    cin >> n;

    vector<int> arr(n); 
    cout << "What are the vector elements - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // For max sum array using Kadane's algorthms -
    int ans = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        ans = max(ans, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    
    cout<<"hence the maximum sum can be print as - "<<ans<<endl;    

/*
vector size - 5
What are the vector elements - 
1 4 -7 11 5
16 

vector size - 5
What are the vector elements - 
1 4 -3 11 5
hence the maximum sum can be print as - 18

T.C - O(n) - no any unnecessary loops
S.C - O(1) - constant because of only 2 variable declared
 */

}