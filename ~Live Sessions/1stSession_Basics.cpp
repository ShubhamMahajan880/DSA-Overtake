#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
// #include<vector>
// #include<set>
using namespace std; // to avoid writing std:: many times
                     // All BAsic Details

// int main()
// {

//     int n;
//     cout << "n's value - " << endl;
//     cin >> n;
//     /* int sum=0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum+=i;
//     }
//     cout<<sum<<endl; */

//     // Here loop is running n times, so the TC is much , so for decreasing this we havw optimal method

//     /*
//     int sum = (n*(n+1)/2);
//     cout<<"Sum is - "<<sum<<endl; */

//     int factorial = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         factorial *= i;
//     }

//     cout << "multiplication is - " << factorial << endl;
// }
// ____________ ____________

// Function understanding -

// data_type function_name(arguements/parameters)

// int samajh() // samajh function declare kiya
// {
//     cout << "funciton run kr rha hu" << endl;
//     return 5;
// }
// int main()
// {
//     samajh(); // samajh function ko call kr rha hu
//     cout << endl;
//     // o/p - funciton run kr rha hu
//     //  yaha kuchh return nhi hua - qki hmne kevel funciton call kiya tha, agr return m ejo likha h vo print krana he to cout ke saath funciton call krenge
//     cout << samajh() << endl;

//     /*
//     O/p - funciton run kr rha hu
//     5
//     */
// }
// Addition of number through functions  -
// int addition(int n)
// {
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cout << "n's value - " << endl;
//     cin >> n;

//     cout<<addition(n)<<endl;
// }
// ____________ ____________

// Factorial of a number through funcitons -
// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         int Mul = 1;
//         for (int i = 1; i <= n; i++)
//         {
//             Mul *= i;
//         }
//         return Mul;
//     }
// }
// int main()
// {
//     int n;
//     cout << "n's value - " << endl;
//     cin >> n;

//      factorial(n);
// }
// ____________ ____________

// reverse the number  -

// int main()
// {
//     int n;
//     cout << "What's in your mind" << endl;
//     cin >> n;
//     int ans = 0;
//     while (n > 0)
//     {
//         int remainder = n % 10;
//         ans = ans * 10 + remainder;
//         n /= 10;
//     }
//     cout << "So, the reversed no. is - " << ans << endl;
// }
// ____________ ____________

// Digit SUm -
// int main()
// {
//     int n;
//     cout << "What's in your mind" << endl;
//     cin >> n;
//     int ans = 0;
//     while (n > 0)
//     {
//         int remainder = n % 10;
//         ans = ans + remainder;
//         n /= 10;
//     }
//     cout << "So, the reversed no. is - " << ans << endl;
// }
// ____________ ____________

// Armstrong Number -
int main()
{
    int n;
    cout << "Number here is - " << endl;
    cin >> n;

    while (n % 10 >= 0)
    {
        int count = 0;

        count++;
    }
    
}