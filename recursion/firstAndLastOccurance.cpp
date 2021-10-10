#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int first(int arr[], int n, int i, int k)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == k)
    {
        return i;
    }
    return first(arr, n, i + 1, k);
}
int last(int arr[], int n, int i, int k)
{
    if (i == n)
    {
        return -1;
    }
    int restarr = last(arr, n, i + 1, k); //we go to last index using this
    if (restarr != -1)
    {
        return restarr;
    }
    if (arr[i] == k)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << first(arr, 7, 0, 2);
}