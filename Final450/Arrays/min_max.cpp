#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
void minmax(int *arr, int size)
{
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
            maximum = arr[i];
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    cout << minimum << maximum;
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
    minmax(arr, n);
}