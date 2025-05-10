#include <bits/stdc++.h>
using namespace std;

void Oddnumber(int n, int m)
{

    if (n > m)
    {
        return;
    }
    if (n % 2 != 0)
    {
        cout << n << endl;
    }
    return Oddnumber(n + 1, m);
}
int main()
{ 
    int n; int m;
    cout<<"Enter the range"<<endl;
    cin>>n>>m;
    Oddnumber(n, m);
    return 0;
}