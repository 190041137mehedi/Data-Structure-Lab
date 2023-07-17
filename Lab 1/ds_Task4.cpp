#include <bits/stdc++.h>
using namespace std;

long long binarySearch_it(long long arr[], long long l, long long r, long long x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    long long n = 0;
    long long x = 0, inp = 0;
    long long arr[1001];
    while (true)
    {
        cin >> inp;
        if (inp < 0)
            break;
        arr[n++] = inp;
    }
    cin >> x;
    cout << binarySearch_it(arr, 0, n - 1, x) << endl;
}






