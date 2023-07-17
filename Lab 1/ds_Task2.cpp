#include <iostream>
using namespace std;

int iteration(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int recursion(int n) {
    if(n > 1)
        return n * recursion(n - 1);
    else
        return 1;
}

int main() {
    int n;
    cin >> n;

    int factorial_it = iteration(n);
    cout << "Factorial using iteration: " << factorial_it << endl;

    int factorial_rec = recursion(n);
    cout << "Factorial using recursion: " << factorial_rec << endl;

    return 0;
}

