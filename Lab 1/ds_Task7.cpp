#include <bits/stdc++.h>

using namespace std;

string arranged(string sum) {
    vector<int> s1;
    stringstream ss(sum);
    int s;
    char op;

    while (ss >> s) {
        s1.push_back(s);
        ss >> op;
    }

    sort(s1.begin(),s1.end());

    string output;
    for (int i = 0; i < s1.size(); i++) {
        output += to_string(s1[i]);
        if (i < s1.size()-1) {
            output += "+";
        }
    }

    return output;
}

int main() {
    string sum;
    getline(cin, sum);

    string arrangedOrder = arranged(sum);
    cout << arrangedOrder << endl;

    return 0;
}
