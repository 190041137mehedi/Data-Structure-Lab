#include <iostream>
#include <unordered_map>

using namespace std;

bool subset(int list1[], int n1, int list2[], int n2) {
    unordered_map<int, bool> umap;

    for (int i = 0; i < n1; i++) {
        umap[list1[i]] = true;
    }

    unordered_map<int, bool>::iterator it;
    for (int i = 0; i < n2; i++) {
        it = umap.find(list2[i]);
        if (it == umap.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    int list1[101], list2[101];
    int n1 = 0, n2 = 0;

    int num;
    while (cin >> num && num != -1) {
        list1[n1++] = num;
    }

    while (cin >> num && num != -1) {
        list2[n2++] = num;
    }

    if (subset(list1, n1, list2, n2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

