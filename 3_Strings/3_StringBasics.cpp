#include<bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
using namespace std;
int main()
{
    // Character Array or Strings - 
char arr[7] = {'S','H','U','b','H','A','m'};
for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<" ";
}
// Note - Every character array or string contains a null character 
// Character array or string can print all elements at a time no need to print one by one as int array
cout<<"i'm in Microsoft "<<endl;
cout<<arr[7];
cout<<" 51LPA Package"<<endl;
// i'm in Microsoft Ç 51LPA Package ; -  b/w both the strings, here ia a null character
// It is basiocally '\0'
// ____________ ____________ 

/*
String Basic Syntax - data_type variable name : - string s
In string value is given by double quotes, while for the single variable it is given by single quotyes
String is a contiguos char array. 
In string no need to give size manualy as char array. It is dynamic and allot the size automatically
*/ 

// Taking input in string - If there is no space then use cin>> for input but for the sentence or line with multiple words by using getline funciton

// string s = "";
// cout<<"Now give the string value - "<<endl;
// cin>>s;// he, buddy what's app, i got placed in Microsoft
// cout<<s<<endl;//he, 

// getline(cin,s);
// cout<<s<<endl;//he, buddy what's app, i got placed in Microsoft

// ____________ ____________ 

// Now for printing the string using for loop concept  - as we know evry string having null character at last

    // string s1;
    // getline(cin,s1);//Congratulations, Shubham..!! for getting placed in Microsoft
    // cout<<s1<<endl;//Congratulations, Shubham..!! for getting placed in Microsoft
    // for (int i = 0; s1[i] == '\0' ; i++)
    // {
    // cout<<s1[i]<<" ";
    // }
    // // C o n g r a t u l a t i o n s ,   S h u b h a m . . ! !   f o r   g e t t i n g   p l a c e d   i n   M i c r o s o f t
    // // For printing how many characters total in the string using for loop.

    // for (int i = 0; s1[i] == '\0' ; i++)
    // {
    // cout<<i;
    // }
    // 01234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859

// ____________ ____________ 

// check that in entered string there is space or not ?, so using for loop
// string s2;
// cout<<"what is your statement dude ..!!"<<endl;//Microsft Hyderabad,MicrosoftHyderabad
// getline(cin, s2);
// cout<<"So you informed about - "<<s2<<endl;//Microsft Hyderabad
// cout<<s2.size();// 19

// for (int i = 0; s2[i] == '\0'; i++)
// {
//     if (s2[i] == ' ')
//     {
//         cout<<"Yes Space Exist";
//         return 0;
//     }    
// }
// cout<<"No space buddy";

// ____________ ____________ 

// Sort & reverse for the string array - 

    // string s;
    // cout<<"What's in your mind"<<endl;
    // cin>>s;//MicrosoftBengaluru
    

    // // sort function for string - 
    // sort(s.begin(), s.end());
    // cout<<s<<endl;//BMacefgilnoorrstuu

    // // reverse function for string -
    // reverse(s.begin(), s.end());
    // cout<<s<<endl;//urulagneBtfosorciM

// ____________ ____________ 

// Palindrome string - 

    // string s;
    // cout<<"What's in your mind"<<endl;
    // getline(cin,s);

    // string original = s;
    // reverse(s.begin(), s.end());
    // if (original == s)
    // {
    //     cout<<"Yes, Palindrome";
    // }
    // else
    // {
    //     cout<<"Not a palindrome string";
    // }
/*
naman
Yes, Palindrome
*/

// ____________ ____________ 

// Count words in string - 

    // string s;
    // cout<<"What's in your mind"<<endl;
    // getline(cin,s);    

    // int space=0;
    
    // for (int i = 0; s[i] == '\0'; i++) // OR for(int i=0; i<s.size(); i++)
    // {
    //     if (s[i] == ' ')
    //     {
    //         space++;
    //     }        
    // }
    // cout<<"the no. of spaces here is - "<<space<<endl;
    // int words = space+1;
    // cout<<"So total words is -  "<<words<<endl;

/*
What's in your mind
Thank You, I accept the offer from Microsoft for hyderabad Location.
the no. of spaces here is - 10
So total words is -  11
*/

// using functions - 

// #include <bits/stdc++.h>
// using namespace std;

// int count_words(string s)
// {
//     int space = 0;

//     for (int i = 0; i < s.size(); i++) // OR for(int i=0; s[i] == '\0'; i++)
//     {
//         if (s[i] == ' ')
//         {
//             space++;
//         }
//     }
//     return space + 1;
// }

// int main()
// {

//     string s;
//     cout << "What's in your mind" << endl;
//     getline(cin, s);

//     cout << count_words(s);
// }

// ____________ ____________ 

// For Vowels using function - 

// #include <bits/stdc++.h>
// using namespace std;

// int count_vowels(string s)
// {
//     int count = 0;

//     for (int i = 0; i < s.size(); i++) // OR for(int i=0; s[i] == '\0'; i++)
//     {
//         if (s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' || s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U')
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main()
// {

//     string s;
//     cout << "What's in your mind" << endl;
//     getline(cin, s);

//     cout << count_vowels(s);
// }

// ____________ ____________ 

// #include <bits/stdc++.h>
// using namespace std;

// int count_Consonants(string s)
// {
//     int count = 0;

//     for (int i = 0; i < s.size(); i++) // OR for(int i=0; s[i] == '\0'; i++)
//     {
//         if (!(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' || s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U'))
//         {
//             count++;
//         }
//     }
//     return count;
// }
    
// int main()
// {

//     string s;
//     cout << "What's in your mind" << endl;//Microsoft Hyderabad

//     getline(cin, s);

//     cout << count_Consonants(s);// 13
// }

// ____________ ____________ ____________ ____________ ____________

//QUn - For the 2 given strings check that are they both Anagram of each other. print yes or no only
/*
Anagram - ek string ke saare characters kisi bhi order me utne hi no. of times agr dusri string me aa rhe he, and no ay another character, then they are Anagram of each other.
Ex. - S1 - abc, and S2 - cba or bac or bca any of these are Ahanagram of String -1
*/

    // string s1,s2;
    // cout << "What's in your mind" << endl;//Microsoft Hyderabad
    // cout<<"Enter the first string   - "<<" ";
    // getline(cin, s1);
    // cout<<"Now, Enter the Second string   - "<<" ";
    // getline(cin, s2);

    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());

    // cout<<"After sort string 1 is "<<s1<<" and string 2 is "<<s2<<endl; 
    // if (s1==s2)
    // {
    //     cout<<"So clearly, strings are Anagram";
    // }
    // else
    // {
    //     cout<<"we can see, strings are Not an Anagram";
    // }

    
/*
What's in your mind
Enter the first string   -  shruti
Now, Enter the Second string   -  rutish
After sort string 1 is hirstu and string 2 is hirstu
So clearly, strings are Anagram

What's in your mind
Enter the first string   -  Madhuri
Now, Enter the Second string   -  ridhima
After sort string 1 is Madhiru and string 2 is adhiimr
we can see, strings are Not an Anagram

What's in your mind
Enter the first string   -  Muskan
Now, Enter the Second string   -  upmuskan
After sort string 1 is Maknsu and string 2 is akmnpsuu
we can see, strings are Not an Anagram
*/
// ____________ ____________ ____________ ____________ ____________

// Qun - Sum of numbers inside the string. 

    string s = "1578";
    
    // Sum of int in a string 
    int sum=0;
    for (int i = 0; i <s.size(); i++)
    {
        sum+=s[i];
    }
    
    cout<<"So, the sum of int inside string is - "<<sum<<endl;
    // So, the sum of int inside string is - 213 - which is wrong because in string int deals with Ascii value as its a character in a string. So its giving the sum of ASCII values of ths entered integers
    











}