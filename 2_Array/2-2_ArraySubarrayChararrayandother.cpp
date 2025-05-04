#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    // Subarray - Array ka koi sa bhi element and in continuos way too. must be either alone or in continuos way'
    // Qun - If target found using subarray sum then put yes otherwise leave it with no.
    
    // int n;
    // cout<<"Array Size"<<endl;
    // cin>>n;

    // int arr[n];
    // cout<<"Array Elements - "<<endl;
    
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // cout<<"So, your entered array is - "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // int target;
    // cout<<"Now press thye Target ELement - "<<endl;
    // cin>>target;
    
    // // For subarray sum - 
    // for (int i = 0; i < n; i++)
    // {
    //     int sum=0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum+=arr[j];
    //         if (sum==target)
    //     {
    //         cout<<"Yes by using subsrray sum we got the target sum"<<endl;
    //         return 0;
    //     }
    //     }       
    // }
    // cout<<"Not found"<<endl;

/*
Array Size
5
Array Elements - 
1 2 3 4 5
So, your entered array is - 
1 2 3 4 5 
Now press thye Target ELement - 
9
Yes by using subsrray sum we got the target
7 
Yes by using subsrray sum we got the target sum
8 
Not found
*/

// ____________ ____________ ____________ ____________ ____________

// Character Array or Strings - 
char arr[7] = {'S','H','U','b','H','A','m'};
for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<" ";
}
// Note - Every character array or string contains a null character 
// Character array or string can print all elements at a time no need to print one by one as int array
cout<<"i'm in Microsoft ";
cout<<arr[7];
cout<<" 51LPA Package";
// i'm in Microsoft Ç 51LPA Package ; -  b/w both the strings, here ia a null character
// It is basiocally '\0'

char arr1[10];
cout<<endl<<"Mention all char array ellemntnts - "<<endl;
cin>>arr1;
cout<<arr1<<endl;


}

