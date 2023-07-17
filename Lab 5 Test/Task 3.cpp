#include <bits/stdc++.h>

using namespace std;

char opposite_par(char x)
{
    char par[']' - '(' + 1] = {}; //calc size of the array and arr accommodate all char
    par['(' - '('] = ')';
    par[')' - '('] = '(';
    par['{' - '('] = '}';
    par['}' - '('] = '{';
    par['[' - '('] = ']';
    par[']' - '('] = '[';
    return par[x - '('];
}
bool isopening(char x)
{
    return x == '(' or x == '{' or x == '[';
}
int main()
{
    long long i, n;
    long long x = 0, t;
    cin >> t;
    string s;

    for (i = 0; i < n; i++)
        while (t--)
        {
            bool vul = 0; //keep track if string valid or not
            stack<char> st;
            cin >> s;
            n = s.length();
            for (i = 0; i < n; i++)
            {
                if (opposite_par(s[i]))
                {
                    if (isopening(s[i]))
                        st.push(s[i]);
                    else
                    {
                        if (st.empty())
                        {
                            cout << "No" << endl;
                            v = 1;
                            break;
                        }
                        if ((opposite_par(s[i]) == st.top())) //closing br matches the top
                            st.pop();
                        else
                        {
                            cout << "No" << endl;
                            v = 1;
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
