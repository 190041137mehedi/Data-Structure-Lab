#include <bits/stdc++.h>

using namespace std;

void push(stack<int>& myStack, int value) {
    myStack.push(value);
}

void pop(stack<int>& myStack) {
    if (!myStack.empty()) {
        myStack.pop();
    } else {
        cout << "Cannot pop" << endl;
    }
}

int top(stack<int>& myStack) {
    if (!myStack.empty()) {
        return myStack.top();
    } else {
        cout << "No top" << endl;
        return -1;
    }
}

int size(stack<int>& myStack) {
    return myStack.size();
}

bool isEmpty(stack<int>& myStack) {
    return myStack.empty();
}

int main() {
    stack<int> myStack;

    push(myStack, 10);
    push(myStack, 20);
    push(myStack, 30);

    if (isEmpty(myStack)) {
        cout << "Stack empty." << endl;
    } else {
        cout << "Stack not empty." << endl;
    }

    cout << "Top element: " << top(myStack) << endl;

    pop(myStack);

    cout << "Top: " << top(myStack) << endl;

    cout << "Size: " << size(myStack) << endl;

    return 0;
}
