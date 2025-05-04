#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "Buddy, what are you thinking about " << endl;
    getline(cin, s);

    string vwls, cnsnnts, NoALphaChar;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i]==' ')
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                vwls += s[i];
            }
            else
            {
                cnsnnts += s[i];
            }
        }
        else
        {
            NoALphaChar+=s[i];
            
        }
    }
    
    cout << "So, all voweks of givenstring is - " << vwls << endl;
    cout << "So, all consonants of givenstring is - " << cnsnnts << endl;
    cout << "It's not an alphabetical character: " << NoALphaChar << endl;

/*
Buddy, what are you thinking about 
Shubham Mahajan 880
So, all voweks of givenstring is - uaaaa
So, all consonants of givenstring is - Shbhm Mhjn 
It's not an alphabetical character: 880
*/    
}