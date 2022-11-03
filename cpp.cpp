#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
void insertionsort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        while (arr[j] > curr)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
}
void bubblsort(int *arr, int n)
{
    int c = 1;
    while (c < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            c++;
        }
    }
}
void merge(int *arr, int l, int m, int r)
{
    int i, j, k, nl, nr;
    nl = m - l + 1;
    nr = r - m;
    int larr[nl], rarr[nr];
    for (i = 0; i < nl; i++)
        larr[i] = arr[l + i];
    for (j = 0; j < nr; j++)
        rarr[j] = arr[m + j + 1];
    i, j = 0;
    k = 1;
    while (i < nl && j < nr)
    {
        if (larr[i] <= rarr[j])
        {
            arr[k] = larr[i];
            i++;
        }
        if (larr[i] >= rarr[j])
        {
            arr[k] = rarr[j];
            j++;
        }
        k++;
    }
    while (i < nl)
    {
        arr[k] = larr[i];
        i++;
        k++;
    }
    while (j < nr)
    {
        arr[k] = rarr[j];
        j++;
        k++;
    }
}
void mergesort(int *arr, int l, int r)
{
    int m;
    if (l < r)
    {
        m = l + (r - 1) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
}