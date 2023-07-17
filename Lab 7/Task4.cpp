#include <bits/stdc++.h>

using namespace std;

bool uniqueChar(const string& word, const string& target) {
    unordered_set<char> sentence(sentence.begin(), sentence.end());
    unordered_set<char> targetChar(target.begin(), target.end());
    return sentence == targetChar;
}

int main() {
    string s, target;
    getline(cin, s);
    getline(cin, target);

    stringstream ss(s);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    bool found = false;
    for (const string& word : words) {
        if (uniqueChar(word, target)) {
            cout << word << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "No matching word found.";
    }

    return 0;
}
