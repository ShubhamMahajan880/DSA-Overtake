#include <iostream>
using namespace std;

// Functions in C++

// int reverse(int num)
// {

//    int Reversenum = 0;
//    while (num!=0)
//    {
//        int last_digit = num%10;
//        Reversenum = Reversenum*10+last_digit;
//        num = num/10;
//    }
//    return Reversenum;
// }

// int main()
// {
//    // reverse number calling the program for execution
//    int num;
//    cout<<"Enter the no. you want to reverse"<<endl;
//    cin>>num;

//    cout<<reverse(num)<<endl;
//    // now by using the function concept i can do the same for multiple times
//    cout<<reverse(num)<<endl;
//    cout<<reverse(555)<<endl;
//    cout<<reverse(658)<<endl;
//    cout<<reverse(1010)<<endl;
// }

// ____________ ____________ ____________ ____________ ____________

//  Number sum -

// int digit_sum(int num2)
// {

//     int sum = 0;
//     while (num2 != 0)
//     {
//         int last_digit = num2 % 10;
//         sum = sum + last_digit;
//         num2 = num2/10;
//     }
//     return sum;
// }

// int main()
// {
//     cout<<digit_sum(1257)<<endl;
//     cout<<digit_sum(3458)<<endl;
//     cout<<digit_sum(555)<<endl;
// }

// ____________ ____________ ____________ ____________ ____________


// Prime Number Program

// bool isprime(int num)
// {
//     if (num==1)
// {
//     cout<<"No. is Neither Prime Nor Composite"<<endl;
//     return 0;
// }

// for (int i = 2; i <= num-1; i++)
// {
//     if (num%i==0)
//     {
//         cout<<"Not a Prime Number"<<endl;
//         return 0;
//     }
// }
//     cout<<"prime number"<<endl;

// }

// int main()
// {
//     int num;
//     cout<<"Enter the no. you wants to check for Prime or Not"<<endl;
//     cin>>num;
//     isprime(num);
//     cout<<isprime(num)<<endl;
// }

// ____________ ____________

// bool isprime(int num)
// {
//     if (num==1)//it based on the qun as per given treat 1 ptime or not. here treating 1 as prime
// {

//     return true;
// }

// for (int i = 2; i <= num-1; i++)
// {
//     if (num%i==0)
//     {
//         return false;
//     }
// }
//     return true;

// }

// int main()
// {
//     int num;
//     cout<<"Enter the no. you wants to check for Prime or Not"<<endl;
//     cin>>num;
//     isprime(num);
//     cout<<isprime(num)<<endl;
// }

// ____________ ____________

// Print all Prime Numbers between a and b

bool isprime(int num)
{
    if (num == 1)
    {
        return true;
    }

    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        return true;
    }
}

int main()
{
    int a, b;
    cout << "ENter the numbers respectively, from where you want to checking for prime number \n"
         << endl;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            cout << i << endl;
        }
    }
}

// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________