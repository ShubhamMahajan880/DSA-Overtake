#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
// #include<vector>
// #include<set>
using namespace std;
 

void winner(int n, int score[])
{
    int even = 0, odd = 0;
    // eVEN
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            even += score[i];
        }
        // Odd -
        else
        {
            odd += score[i];
        }
    }
    if (even>odd)
    {
        cout<<"Green Team"<<even - odd<<endl;
    }
    else if(odd>even)
    {
        cout<<"Blue Team"<<odd - even <<endl;
    }
    else
    {
        cout<<"Draw";
    }
    
}
int main()
{
    int n;
    cout << "Array Size" << endl;
    cin >> n;
    int score[n];
    for (int i = 0; i < n; i++)
    {
        cin>>score[i];
    }
    
    winner(n, score);
/*
Array Size
6 
11 29 21 3 5 9
Green Team4
*/    
}