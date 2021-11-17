#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
int maxsubsum(int arr[], int n)
{
    int fullsum = INT_MIN;
    int subsum = 0;
    for (int i = 0; i < n; i++)
    {
        subsum += arr[i];
        if (fullsum < subsum)
        {
            fullsum = subsum;
        }
        if (subsum < 0)
        {
            subsum = 0;
        }

        // cout << subsum << endl;
    }
    return fullsum;
}
int main()
{
    int Arr[] = {1, 2, 3, -2, 5};
    cout << maxsubsum(Arr, 5);
}