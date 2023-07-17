#include <bits/stdc++.h>
using namespace std;

char opposite_brac(char x)
{
    char brac[']' - '(' + 1] = {};
    brac['(' - '('] = ')';
    brac[')' - '('] = '(';
    brac['{' - '('] = '}';
    brac['}' - '('] = '{';
    brac['[' - '('] = ']';
    brac[']' - '('] = '[';
    return brac[x - '('];
}
bool openingBracket(char x)
{
    return x == '(' or x == '{' or x == '[';
}
int main()
{
    long long i, j, n;
    long long t;
    cin >> t;
    string s;

    for (i = 0; i < n; i++)
        while (t--)
        {
            bool vul = 0;
            stack<char> st;
            cin >> s;
            n = s.length();
            for (i = 0; i < n; i++)
            {
                if (opposite_brac(s[i]))
                {
                    if (openingBracket(s[i]))
                        st.push(inp[i]);
                    else
                    {
                        if (st.empty())
                        {
                            cout << "No" << endl;
                            vul = 1;
                            break;
                        }
                        if ((opposite_brac(s[i]) == st.top()))
                            st.pop();
                        else
                        {
                            cout << "No" << endl;
                            vul = 1;
                            break;
                        }
                    }
                }
            }
            if (!vul and st.empty())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
}
