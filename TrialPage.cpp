#include <bits/stdc++.h>
using namespace std;
    
int main()
{

    string s1,s2;
    cout << "What's in your mind" << endl;//Microsoft Hyderabad
    cout<<"Enter the first string   - "<<" ";
    getline(cin, s1);
    cout<<"Now, Enter the Second string   - "<<" ";
    getline(cin, s2);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    cout<<"After sort string 1 is "<<s1<<" and string 2 is "<<s2<<endl; 
    if (s1==s2)
    {
        cout<<"So clearly, strings are Anagram";
    }
    else
    {
        cout<<"we can see, strings are Not an Anagram";
    }

    
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
}