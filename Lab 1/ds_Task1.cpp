#include <iostream>

using namespace std;

void count_numbers() {
    int numbers[101] = {0};
    int n;

    while (true) {
        cin >> n;

        if (n <= 0) {
            break;
        }

        if (n >= 1 && n <= 9) {
            numbers[n]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (numbers[i] > 0) {
            cout << numbers[i] << " ";
        } else {
            cout << "0 ";
        }
    }
    cout << endl;
}

int main() {
    count_numbers();
    return 0;
}
