#include <iostream>
#include <unordered_map>

using namespace std;

void findPairs(unordered_map<int, int>& hashmap, int t) {
    bool foundPairs = false;

    for (auto it = hashmap.begin(); it != hashmap.end(); it++) {
        int key = it->first;
        int remaining = t - key;

        if (remaining == key && hashmap[remaining] > 1) {   // checks if remaining is equal to key&if more than one occurrences of key in the hashmap
            foundPairs = true;
            cout << "(" << key << "," << remaining << "), ";
        } else if (remaining > key && hashmap.find(remaining) != hashmap.end()) { //checks if remaining>key,if remaining is present in the hashmap.another valid pair
            foundPairs = true;
            cout << "(" << key << "," << remaining << "), ";
        }
    }

    if (!foundPairs) {
        cout << "No pairs found";
    }
    cout << endl;
}

int main() {
    unordered_map<int, int> hashmap;
    int num;

    while (cin >> num && num != -1) {
        hashmap[num]++;
    }

    int t;
    cin >> t;

    findPairs(hashmap, t);

    return 0;
}
