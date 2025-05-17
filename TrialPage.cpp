#include <bits/stdc++.h>
using namespace std;

bool checkparenthesis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        // closing

        else
        {
            if (st.empty())
            {
                return false;
            }
            if (s[i] == ')')
            {
                if (st.top() != '(')
                {
                    return false;
                }
            }
        st.pop();
        }
    }
    if (st.size() != 0)
    {
        false;
    }
    
}

int main()
{
    string s;
    cout << "What's your parenthesis " << endl;
    cin >> s;

    cout << checkparenthesis(s)<<endl;;
}
