#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
// bubble sort
void bubbleSort(int *arr, int size)
{
    int counter = 1;
    while (counter < size)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}
void merge(int *arr, int l, int m, int r)
{
    int i, j, k, nl, nr;
    nl = m - l;
    nr = r - m - 1;
    int larr[nl], rarr[nr];
    for (i = 0; i < nl; i++)
    {
        larr[i] = arr[l + i];
    }
    for (j = 0; j < nr; j++)
    {
        rarr[j] = arr[m + 1 + j];
    }
    i, j, k = 0;
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
void mergeSort(int *arr, int l, int r)
{
    int m;
    if (l < r)
    {
        m = l + (r - 1) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void insertionsort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        while (arr[j] > arr[j + 1] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
}
int main()
{
}