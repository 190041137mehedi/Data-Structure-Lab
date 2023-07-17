#include <bits/stdc++.h>

using namespace std;

vector<int> Intersection(vector<int>& num1, vector<int>& num2) {
    unordered_map<int, int> freqCounter;
    vector<int> result;

    for (int num : num1) {
        freqCounter[num]++;
    }

    for (int num : num2) {
        if (freqCounter[num] > 0) {
            result.push_back(num);
            freqCounter[num]--;
        }
    }

    return result;
}

int main() {
    vector<int> num1, num2;
    int input;

    while (true) {
        cin >> input;
        if (input == -1) {
            break;
        }
        num1.push_back(input);
    }

    while (true) {
        cin >> input;
        if (input == -1) {
            break;
        }
        num2.push_back(input);
    }

    vector<int> intersection = Intersection(num1, num2);

    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
