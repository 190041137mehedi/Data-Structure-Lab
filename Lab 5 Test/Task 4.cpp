#include <bits/stdc++.h>

using namespace std;

string removeDup(string s) {   //duplicate removing
    stack<char> stackA;
    for (char c : s) {
        if (stackA.empty() || c != stackA.top()) {  //not duplicate
            stackA.push(c);
        } else {
            stackA.pop();  //duplicate popped
        }
    }

    string result;         //constructing stack
    while (!stackA.empty()) {
        result = stackA.top() + result;
        stackA.pop();
    }

    return result;
}

int main() {
    string a;
    cin >> a;

    string result = removeDup(a);
    cout << result << endl;

    return 0;
}
