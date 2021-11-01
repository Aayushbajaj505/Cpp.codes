// tags - amazon,oracle

#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int idx[n + 1];
    idx[n] = -1;
    for (int i = 0; i < n; i++)
    {
        idx[i] = -1;
        cin >> arr[i];
    }
    int minidx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(idx[arr[i]], minidx);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    cout << minidx + 1 << endl;
}