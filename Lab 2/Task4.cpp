#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long i;
    long long t;
    cin >> t;
    string s;
    stack<char> myStack;
    while (t--)
    {
        cin >> s;
        for (i = 0; i < s.length(); i++)
            myStack.push(s[i]);
        while (myStack.size())
        {
            cout << myStack.top();
            myStack.pop();
        }
        cout << endl;
    }
}
