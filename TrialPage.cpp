#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<cctype>
// #include<iomanip>
// #include<cmath>
// #include<vector>
// #include<set>
// #include<string>
// #include<list>
// #include<iterator>
// #include<stack>
// #include <queue>
// #include <deque>
// #include <map>;
// #include <set>;
// #include<unordered_map>
// #include<unordered_set>
using namespace std;

int binarySearchingUsingSTL(int n, int arr[], int findelement)
{
    if (binary_search(arr, arr + n, findelement))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n = 5;
    int arr[5] = {10, 20, 30, 40, 50};
    int findelement = 55;
    cout << binarySearchingUsingSTL(n, arr, findelement) << endl;
}

