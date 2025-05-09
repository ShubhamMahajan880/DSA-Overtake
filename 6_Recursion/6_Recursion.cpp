#include<bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
using namespace std;


// void welcome(int n)
// {
//     if (n==0)
//     {
//         return;
//     }//if not use return to anything or any coondition then the funcaiton calling will be conutinuoes for the infinite times
    
//     cout<<"Hii, Future version of Shubham Mahajan, is going to placed in Microsoft which opens new Corporate office in Pune "<<endl;
//     welcome(n-1);
// }

// int main()
// {
//     // Recursion - Re-Occur. Function calling again and again. Function calling itself
//     welcome(10); // - if we'll not pass the arguements then it'll be running for the infinite time, so passing arguements for how many times .

// /*
// Hii, Future version of Shubham Mahajan, is going to placed in Microsoft which opens new Corporate office in Pune 
// Hii, Future version of Shubham Mahajan, is going to placed in Microsoft which opens new Corporate office in Pune 
// Hii, Future version of Shubham Mahajan, is going to placed in Microsoft which opens new Corporate office in Pune 
// Hii, Future version of Shubham Mahajan, is going to placed in Microsoft which opens new Corporate office in Pune 
// Hii, Future version of Shubham Mahajan, is going to placed in Microsoft which opens new Corporate office in Pune 
// Hii, Future version of Shubham Mahajan, is going to placed in Microsoft which opens new Corporate office in Pune 
// Hii, Future version of Shubham Mahajan, is going to placed in Microsoft which opens new Corporate office in Pune 
// Hii, Future version of Shubham Mahajan, is going to placed in Microsoft which opens new Corporate office in Pune 
// Hii, Future version of Shubham Mahajan, is going to placed in Microsoft which opens new Corporate office in Pune 
// Hii, Future version of Shubham Mahajan, is going to placed in Microsoft which opens new Corporate office in Pune 
// */
// }
// ____________ ____________ 

// void welcome(int n)
// {
//     if (n==0)
//     {
//         return;
//     }

//     cout<<"n = "<<n<<endl;
//     welcome(n-1);// Responsible for Fucniton Calling
// }
// int main()
// {
//     welcome(10);
// }
// /*
// n = 10
// n = 9
// n = 8
// n = 7
// n = 6
// n = 5
// n = 4
// n = 3
// n = 2
// n = 1
// */

// ____________ ____________ 

// void welcom2(int n)
// {
//     if (n==0)
//     {
//         return;
//     }

//     welcom2(n-1);// Responsible for Fucniton Calling - yaha kya hua ki function print hone ke phle hi call ho gya, to jb 10 se 1 tk call hua phr condition return ho gyi. ab print pr aayagea

//     cout<<"n = "<<n<<endl;
// }
// int main()
// {
//     welcom2(10);
// }

// /*
// n = 1
// n = 2
// n = 3
// n = 4
// n = 5
// n = 6
// n = 7
// n = 8
// n = 9
// n = 10
// */

// ____________ ____________ 

// Factorial Program using funciton 
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"Write the number - "<<endl;
    cin>>n;
    cout<<factorial(n);


    
}
