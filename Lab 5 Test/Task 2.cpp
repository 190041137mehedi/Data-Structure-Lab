#include <bits/stdc++.h>

using namespace std;

int countNumber(vector<int>& arr, int q) {
    int left = 0;
    int right = arr.size() - 1;
    int count = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < q) {
            count = mid + 1;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return count;
}

int main() {
    vector<int> arr;
    int a;
    while (cin >> a && a != -1) {
        arr.push_back(a);
    }

    int q;
    cin >> q;

    int result = countNumber(arr, q);
    cout << result << endl;

    return 0;
}
