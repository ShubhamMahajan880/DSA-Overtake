#include <bits/stdc++.h>
using namespace std;

void nonRepeatingCharacter(string s)
{

    for (int i = 0; i < s.size(); i++)
    {
        bool repeating = false;
        for (int j = 0; j < s.size(); j++)
        {
            if (j != i)
            {
                if (s[i] == s[j])
                {
                    repeating = true;
                    break;
                }
            }
        }
        if (repeating == false)
        {
            cout << "First RNon Repeating String is - " << s[i] << endl;
            return;
        }
    }
    cout << "Not any NonReapeatingCharacter exist, all are repeating" << endl;
}

void repeatingCharacter(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (i != j)
            {
                if (s[i] == s[j])
                {
                    cout << "First Repeating Strin gsis - " << s[i] << endl;
                    return;
                }
            }
        }
    }
}

int main()
{
    string s1;
    cout << "Enter string 1" << endl;
    getline(cin, s1);

    cout << "So, you entered " << endl;
    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i];
    }
    cout << endl;

    nonRepeatingCharacter(s1);
    repeatingCharacter(s1);
}
