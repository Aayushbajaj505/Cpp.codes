#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
void merge(int *arr, int *arr1, int n, int m)
{
    int i = 0;
    while (arr[n - 1] > arr1[0])
    {
        if (arr[i] > arr1[0])
        {
            swap(arr[i], arr1[0]);
            sort(arr1, arr1 + m);
        }
        i++;
    }
}
int main()
{
}