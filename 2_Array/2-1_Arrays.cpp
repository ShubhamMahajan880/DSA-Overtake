#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 7) QUn - Targeted Element. Print yes if there is a  pair in the array that sum up to target. Array ke kisi element ya kinhi bhi elements ka sum target ke brabr he to yes kre

    //     int n;
    // cout << "mention the array size you want" << endl;
    // cin >> n;
    // int arr1[n];

    // cout << "Enter the array elements going to print - " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr1[i];
    // }
    // cout << "So, the entered array is - " << endl;
    // for (int i = 0; i < n; i++)
    // {

    //     cout << arr1[i] << " ";
    // }
    // cout << endl;

    // int target;
    // cout << "WHat value you want to target - " << endl;
    // cin >> target;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {

    //         if (arr1[i] + arr1[j] == target)
    //         {
    //             cout << "Got the target and elementts are  - " << arr1[i] << " " << arr1[j] << endl;
    //             return 0;
    //         }
    //     }
    // }
    // cout << "Not found the targetby array elements";

    /*
    mention the array size you want
    5
    Enter the array elements going to print -
    56 89 12 45 78
    So, the entered array is -
    56 89 12 45 78
    WHat value you want to target -
    57
    Got the target and elementts are  - 12 45
    ____________ ____________
    mention the array size you want
    5
    Enter the array elements going to print -
    89 56 32 21 54
    So, the entered array is -
    89 56 32 21 54
    WHat value you want to target -
    78
    Not found the targetby array elements
    */

    // ____________ ____________ ____________ ____________ ____________

    // 8) Qun - For given 2 arrays, find Union & Intersection

    // int n1, n2;
    // cout << "mention the array1 size " << endl;
    // cin >> n1;
    // cout << "mention the array2 size respectively" << endl;
    // cin >> n2;

    // int arr1[n1];
    // int arr2[n2];

    // cout << "Enter the array1 elements going to print - " << endl;
    // for (int i = 0; i < n1; i++)
    // {
    //     cin >> arr1[i];
    // }
    // cout << endl;
    // cout << "and similarly Enter the array2 elements going to print - " << endl;
    // for (int i = 0; i < n2; i++)
    // {
    //     cin >> arr2[i];
    // }

    // cout << endl;

    // // For union -
    // for (int i = 0; i < n1; i++)
    // {
    //     cout << arr1[i] << " ";
    // }

    // for (int i = 0; i < n2; i++)
    // {
    //     // in arr1 check for present or not
    //     // if not present in arr1 then print

    //     bool present = false; // prsent is uses for 1st waale array me aaya he ya nahi
    //     for (int j = 0; j < n1; j++)
    //     {
    //         if (arr2[i] == arr1[j])
    //         {
    //             present = true;
    //         }
    //     }
    //     if (present == false)
    //     {
    //         cout << arr2[i] << " ";
    //     }
    // }
    // cout<<endl;

    // // Intersection -
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n2; j++)
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             cout << arr1[i] << " ";
    //         }
    //     }
    // }
    // cout << endl;
    /*
    mention the array1 size
    5
    mention the array2 size respectively
    2 3 9 18 5
    Enter the array1 elements going to print -
    4

    and similarly Enter the array2 elements going to print -
    5 9 60 4

    3 9 18 5 4
    9 5
    */

    // ____________ ____________ ____________ ____________ ____________

    // 9) Qun - Find majority element if any.
    /*Note - majority elekent is given by > size of array/2
    Majority Element  > {(Size of Array)/2} Ex. = arr[] = {5,3,5,9,5,18,5}
    Majority element 1 hi ho skta h kyuki aadhe se jyadqa baar ek single element available he.
    */

    // int n;
    // cout<<"mention the array size you want"<<endl;
    // cin>>n;
    // int arr[n];

    // cout<<"Enter the array elements going to print - "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<"So, the entered array is - "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // // CHekcing for majority element -

    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i]==arr[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count>n/2)
    //     {
    //         cout<<arr[i]<<endl;
    //         return 0;
    //     }
    // }
    // cout<<"Sorry, No Majjority Eleelment found dude"<<endl;

    /*
    mention the array size you want
    7
    Enter the array elements going to print -
    5 3 5 9 5 20 5
    So, the entered array is -
    5 3 5 9 5 20 5
    5
    */

    // ____________ ____________
    /*
    Method - 2
    Majority candidate can done by sorting the array because after this middle element will be the majority element.
    Agr sorting ke baad middle element majority element nhi hua to phr koi sa nhi ho skta
    */

    // int n;
    // cout<<"mention the array size you want"<<endl;
    // cin>>n;
    // int arr[n];

    // cout<<"Enter the array elements going to print - "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<endl;

    // // CHekcing for majority element -
    // sort(arr, arr+n);
    // int expectedcandidate = arr[n/2];
    // int count = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]==expectedcandidate)
    //     {
    //         count++;
    //     }
    // }
    //     if (count>n/2)
    //     {
    //         cout<<"The Majority candidarte is - "<<expectedcandidate<<endl;
    //     }
    //     else
    // {
    //     cout<<"No Majority element availabe";
    // }
    // ____________ ____________ ____________ ____________ ____________

    // 10) Rotating array concept -

    // 10.2)Right Rotation - Rotate each eleemnt by one in th eRight side

    // int n;
    //     cout << "Array Size: ";
    //     cin >> n;

    //     int arr[n];
    //     cout << "Array Values:\n";
    //     for (int i = 0; i < n; i++) {
    //         cin >> arr[i];
    //     }

    //     cout << "Your array is: ";
    //     for (int i = 0; i < n; i++) {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;

    //     // Right Rotation Logic
    //     int save = arr[n - 1]; // Save the last element
    //     for (int i = n - 1; i > 0; i--) {
    //         arr[i] = arr[i - 1]; // Shift all elements right
    //     }
    //     arr[0] = save; // Put last element at the front

    //     cout << "Hence, the new Right Rotated Array is: ";
    //     for (int i = 0; i < n; i++) {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;

    //     return 0;

    /*
    Array Size: 5
    Array Values:
    1 2 3 4 5
    Your array is: 1 2 3 4 5
    Hence, the new Right Rotated Array is: 5 1 2 3 4
    */
    // ____________ ____________

    // 10.1)Left Rotation - Rotate each eleemnt by one in th eleft side

    // int n;
    // cout<<"Array SIze"<<endl;
    // cin>>n;

    // int arr[n];
    // cout<<"Array Values"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // cout<<"your array is - ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // // For Left Rotation -
    // int save = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = arr[i+1];
    // }
    // arr[n-1] = save;

    // cout<<"Hence, the new Left Rotated Array is -  ";

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    /*
    Array SIze
    4
    Array Values
    3 2 1 0
    your array is - 3 2 1 0
    Hence, the new Left Rotated Array is -  2 1 0 3
    */

    // ____________ ____________ ____________ ____________ ____________

    // 10.3)  WHat if wants to rotate lefyt three times.

    // int n;
    // cout<<"Array SIze"<<endl;
    // cin>>n;

    // int arr[n];
    // cout<<"Array Values"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // cout<<"your array is - ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // // For Left Rotation -
    // int save = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = arr[i+1];
    // }
    // arr[n-1] = save;
    // cout<<"After 1st rotation "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // // For 2nd left rotation -

    // int save1 = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = arr[i+1];
    // }
    // arr[n-1] = save1;
    // cout<<"After 2nd rotation "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // // For 3rd left rotation -

    // int save3 = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = arr[i+1];
    // }
    // arr[n-1] = save3;
    // cout<<"After 3rd rotation "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;
    // cout<<"Hence, the new Left Rotated Array is -  ";

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    /*
    Array SIze
    5
    Array Values
    1 2 3 4 5
    your array is - 1 2 3 4 5
    After 1st rotation
    2 3 4 5 1
    After 2nd rotation
    3 4 5 1 2
    After 3rd rotation
    4 5 1 2 3
    Hence, the new Left Rotated Array is -  4 5 1 2 3
    */
    // ____________ ____________

    // Using function can be done very easily -

    /*
    #include <bits/stdc++.h>
    using namespace std;
    void left_rotate(int arr[], int n)
    {
        int save = arr[0];
        for (int i = 0; i < n-1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = save;

    }


    int main()
    {
        int n;
        cout<<"Array Size"<<endl;
        cin>>n;

        int arr[n];
        cout<<"Array Elements - "<<endl;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        cout<<"So, your entered array is - "<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        left_rotate(arr,n);
        left_rotate(arr,n);
        left_rotate(arr,n);
        cout<<"So, the new rotated array is - "<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
    */

    /*
    Array Size
    5
    Array Elements -
    1 2 3 4 5
    So, your entered array is -
    1 2 3 4 5
    So, the new rotated array is -
    4 5 1 2 3
    */
    // ____________ ____________

    // Similarly for k times as per the need -

    // void left_rotate(int arr[], int n)
    // {
    //     int save = arr[0];
    //     for (int i = 0; i < n-1; i++)
    //     {
    //         arr[i] = arr[i+1];
    //     }
    //     arr[n-1] = save;

    // }

    // int main()
    // {
    //     int n;
    //     cout<<"Array Size"<<endl;
    //     cin>>n;

    //     int arr[n];
    //     cout<<"Array Elements - "<<endl;

    //     for (int i = 0; i < n; i++)
    //     {
    //         cin>>arr[i];
    //     }

    //     cout<<"So, your entered array is - "<<endl;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;

    //     int k;
    //     cout<<"how many times you want to rotate this "<<endl;
    //     cin>>k;
    //     for (int i = 0; i < k; i++)
    //     {
    //         left_rotate(arr,n);
    //     }

    //     cout<<"So, the new rotated array is - "<<endl;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout<<arr[i]<<" ";
    //     }

    // /*
    // Array Size
    // 5
    // Array Elements -
    // 1 2 3 4 5
    // So, your entered array is -
    // 1 2 3 4 5
    // how many times you want to rotate this
    // 4
    // So, the new rotated array is -
    // 5 1 2 3 4
    // */
    // }
    // ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________
    // Qun - 11) - maximum Profit on selling  -
    // Note - It's mandatory to first buy then sell the share
    int n;
    cout << "Mention the array size" << endl;
    cin >> n;

    int arr5[n];
    cout << "Put Market Prices of Shares " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr5[i];
    }

    cout << "So, the stock prixes inside the araay is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr5[i]<<" ";
    }
    cout<<endl;
    
    int max_profit = 0;
    for (int i = 0; i < n; i++)
    {
        int buying_price = arr5[i];
        for (int j = i; j < n; j++)
        {
            int selling_price = arr5[j];
            if (selling_price - buying_price > max_profit)
            {
                max_profit = selling_price - buying_price;
            }    // or coudl be done by using max funciton - max_profit = max(max_profit, arr[j]-arr[i])
        }
    }

    cout << "So, the profile as per the buying and selling price is - " << max_profit << endl;
}

/*
Mention the array size
5
Put Market Prices of Shares 
9 5 15 8 2
So, the stock prixes inside the araay is - 
9 5 15 8 2 
So, the profile as per the buying and selling price is - 10

Mention the array size
5
Put Market Prices of Shares 
7 12 15 8 30
So, the stock prixes inside the araay is - 
7 12 15 8 30 
So, the profile as per the buying and selling price is - 23
*/

// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________
