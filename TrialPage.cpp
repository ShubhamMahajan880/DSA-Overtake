#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Taking input in vector - 
    int n;
    cout << "The sixe of vectopr is - " << endl;
    cin >> n;
    vector<int> v6(n);

    cout << "Enter elements of the vector" << endl;
    for (int i = 0; i < v6.size(); i++)
    {
        cin >> v6[i];
    }
    
    cout << "So, enetered vector we have os - " << endl;
    for(auto i:v6)
    {
        cout<<i<<" ";
    }
}
