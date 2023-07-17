#include <bits/stdc++.h>

using namespace std;

int fibonacciRec(int n) {
    if (n == 0) {
        return 0;
    }
    if (n <= 2) {
        return 1;
    }

    return fibonacciRec(n - 1) + fibonacciRec(n - 2);
}

int fibonacciIt(int n) {
    if (n == 0) {
        return 0;
    }
    if (n <= 2) {
        return 1;
    }

    int prev = 0;
    int curr = 1;

    for (int i = 3; i <= n; i++) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int fibonacci = fibonacciIt(n);
    int fibonacci1 = fibonacciRec(n);

    cout << "The " << n << "-th Fibonacci number is: " << fibonacci << endl;
    cout << "The " << n << "-th Fibonacci number is: " << fibonacci1 << endl;

    return 0;
}
