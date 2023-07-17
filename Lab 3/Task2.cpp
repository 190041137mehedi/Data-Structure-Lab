#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 100;

int arr[MAX_SIZE];

int frontIndex = 0;
int backIndex = 0;

void Enque(int x) {
    if (backIndex == MAX_SIZE - 1) {
        cout << "Queue full" << endl;
        return;
    }
    backIndex++;
    arr[backIndex] = x;
    cout << "Enqueued element: " << x << endl;
}

void Dequeue() {
    if (frontIndex == backIndex) {
        cout << "Error" << endl;
        return;
    }
    int dequeuedElement = arr[frontIndex];
    frontIndex++;
    cout << "Dequeued element: " << dequeuedElement << endl;
}

int front() {
    if (frontIndex == backIndex) {
        cout << "Queue is empty." << endl;
        return -1;
    }
    return arr[frontIndex];
}

int back() {
    if (frontIndex == backIndex) {
        cout << "Queue is empty." << endl;
        return -1;
    }
    return arr[backIndex];
}

bool isEmpty() {
    if(front == back)
        return true;
    else
        return false;
}

void showQ() {
    if (frontIndex == backIndex) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = frontIndex; i <= backIndex; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int size() {
    return (backIndex - frontIndex + 1);
}

int main() {
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);

    showQ();
    cout << "Front element: " << front() << endl;
    cout << "Back element: " << back() << endl;

    Dequeue();
    Dequeue();

    showQ();

    cout << "Size of the queue: " << size() << endl;

    return 0;
}
