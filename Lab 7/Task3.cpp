#include <bits/stdc++.h>
using namespace std;

void printFrequencies(const string &str)
{
    unordered_map<string, int> wordFreq;
    stringstream ss(str);
    string word;

    while (ss >> word)
        wordFreq[word]++;

    unordered_map<string, int>::iterator it;
    for (it = wordFreq.begin(); it != wordFreq.end(); it++)
        {
        if (it->second > 1)
            cout << "(" << it->first << ", " << it->second << ")\n";
        }
}

int main()
{
    string s;
    getline(cin, s);
    printFrequencies(s);
    return 0;
}
