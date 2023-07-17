#include <iostream>

using namespace std;

int main() {
    const int level = 100;
    int workers[level];
    int energy;


    int workerCount = 0;
    while (cin >> energy && energy != 0 && workerCount < level) {
        workers[workerCount] = energy;
        workerCount++;
    }

    int pairCount = 0;
    bool pairFound = false;

    for (int i = 0; i < workerCount - 1; i++) {
        for (int j = i + 1; j < workerCount; j++) {
            if (workers[i] + workers[j] == 0) {
                pairCount++;
                cout << "(worker-" << i + 1 << ", worker-" << j + 1 << ")" << endl;
                pairFound = true;
            }
        }
    }

    cout << pairCount << " pairs" << endl;

    if (!pairFound) {
        cout << "No pair found!" << endl;
    }

    return 0;
}

