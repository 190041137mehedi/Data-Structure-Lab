#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long i, n;
    long long x = 0, a, count = 0;
    cin >> n >> x;
    priority_queue<int, vector<int>, greater<int>> q;  //priority queue with integers in descending order
    for (i = 0; i < n; i++)
    {
        cin >> a;
        q.push(a);
    }
    while (!q.empty() && q.top() < x)
    {
        int temp = q.top(); // Retrieve and remove top
        q.pop();
        if (!q.empty())
        {
            int temp2 = q.top();
            q.pop();
            q.push(temp + 2 * temp2);
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
}
