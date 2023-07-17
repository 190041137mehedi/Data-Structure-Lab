#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    if (myStack.empty()) {
        cout << "Stack empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    cout << "Top element: " << myStack.top() << endl;

    myStack.pop();

    cout << "Top: " << myStack.top() << endl;

    cout << "Size: " << myStack.size() << endl;

    return 0;
}

