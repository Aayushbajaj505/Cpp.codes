#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
void reverse(int *arr, int s, int e)
{
    if (s > e)
    {
        return;
    }
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    reverse(arr, ++s, --e);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}