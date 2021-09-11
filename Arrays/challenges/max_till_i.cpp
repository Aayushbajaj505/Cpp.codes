#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxNo = 0;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(arr[i], maxNo);
        cout << maxNo;
    }
}