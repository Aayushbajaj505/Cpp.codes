#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
int getpaircount(int *arr, int n, int sum)
{
    unordered_map<int, int> m;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (m.find(sum - arr[i]) != m.end())
        {
            count++;
        }
        m[arr[i]]++;
    }
    return count;
}
int main()
{
    int arr[] = {1, 5, 7, -1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    cout << "Count of pairs is " << getpaircount(arr, n, sum);
    return 0;
}