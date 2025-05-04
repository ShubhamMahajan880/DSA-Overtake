#include<iostream>
using namespace std;
int main()
{
//     cout<<"51 LPA Get Placed\n";//51 LPA Get Placed
//     cout<<5;//51 LPA Get Placed
//     cout<<10+5;//15
//     cout<<20*5;//100
//     cout<<20/5;//4

// // Data type basics
//     int variable = 50;
//     cout<<variable;//50
//     float variable1 = 50.50;
//     cout<<variable1;//50.50
//     char var = 'A';
//     cout<<var;//A

//     bool var2 = true;
//     cout<<var2;//1 - true is consider as 1 in cpp

    // int a = 10;
    // int b = 100;
    // int c = 1000;
    // cout<<a<<endl;//10
    // cout<<b<<endl;//100
    // cout<<c<<endl;//1000
    // cout<<a+b+c<<endl;//1110


// Taking input in cpp

    // int var3;
    // cout<<"ENter the var3 value"<<endl;
    // cin>>var3;//5000
    // cout<<var3;

// Loops in CPP - 
    // print the numbers from 1 to 111

    // for (int i = 1; i <= 111; i++)
    // {
    //     cout<<i<<endl;
    // }
    // int j = 1;
    // while (j<=15)
    // {
    //     cout<<j<<endl;
    //     j++;
    // }

    // Two independent for loops - 
    for (int i = 0; i < 3; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for (int j = 0; j < 3; j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
/*
0 1 2 
0 1 2 
*/    
    // Now for two Dependent for loops - 
    for (int i = 0; i <3; i++)
    {
        cout<<i<<" ";        
        for (int j = 0; j < 3; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
/*
0 0 1 2 
1 0 1 2 
2 0 1 2 
*/
    

// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________


// reverse the number

    // int num;
    // cout<<"Enter the no. you want to reverse"<<endl;
    // cin>>num;//372

    // int Reversenum = 0;
    // while (num!=0)
    // {
    //     int last_digit = num%10;
    //     Reversenum = Reversenum*10+last_digit;
    //     num = num/10;
    // }
    // if (Reversenum==num)
    // {
    //     cout<<"Yes..!! Palindrome number"<<endl;
    // }
    // else
    // cout<<"Reversed No. is - "<<Reversenum<<endl;

// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________


// Palindrome Number - no. having same value when reverse
    // int num;
    // cout<<"Enter the no. you want to check that its Palindrome or not"<<endl;
    // cin>>num;
    // int reversenum = 0;
    // int originalnum = num;

    // while (num!=0)
    // {
    //     int last_digit = num%10;
    //     reversenum = reversenum*10+last_digit;
    //     num = num/10;
    // }
    // if (reversenum == originalnum)
    // {
    //     cout<<"congrats you got a PALINDROME NUMBER"<<endl;
    // }
    // else
    // cout<<"The reverse order of inserted number is " <<reversenum<<"and it's not a palindrome number"<<endl;

// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________

 
// 3 - sum of digits

    // int num2;
    // cout<<"Numvber ka sum"<<endl;
    // cin>>num2;
    // int sum=0;

    // while (num2!=0)
    // {
    //      int last_digit = num2%10;
    //      sum = sum+last_digit;
    //      num2 /=10;
    // }
    // cout<<sum<<endl;

// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________


// Prime Number Program

// No. either divide by itself or 1 is prime number - so if no is divisible by 2 to number-1 any number -> Then will not be a prime number

// int num;
// cout<<"Enter the no. you wants to check for Prime or Not"<<endl;
// cin>>num;

// if (num==1)
// {
//     cout<<"No. is Neither Prime Nor Compite"<<endl;
// }

// for (int i = 2; i <= num-1; i++)
// {
//     if (num%i==0)
//     {
//         cout<<"Not a Prime Number"<<endl;
//         return 0;
//     }    
// }
// cout<<"prime number"<<endl;

}

// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________