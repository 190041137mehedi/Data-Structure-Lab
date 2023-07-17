#include <bits/stdc++.h>

using namespace std;
long long operate(long long a, char op, long long b)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        break;
    }
    return 0;
}
int main()
{
    stack<long long> stack;
    long long i;
    long long t, temp1, temp2;
    string s;

    cin >> t;
    while (t--)
    {
        cin >> s;
        for (i = 0; i < s.length(); i++)
        {
            if (isdigit(s[i]))
            {
                stack.push(s[i] - '0');
            }

            else
            {
                temp1 = stack.top();
                stack.pop();
                temp2 = stack.top();
                stack.pop();

                stack.push(operate(temp2, s[i], temp1));
            }
        }
        cout << stack.top() << endl;
    }
}
