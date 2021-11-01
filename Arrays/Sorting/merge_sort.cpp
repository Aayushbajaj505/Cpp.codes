#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    // temp arrays
    int a[n1];
    int b[n2];
    // the main array at this point contains
    // two sorted arrays but needs to be merged
    // store both arrays in temp array because checking and
    // opertaion cannot be done on the same array
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
        //edge case if i does not reach n1
        while (i < n1)
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        //edge case if j does not reach n2
        while (j < n2)
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid, r);

        merge(arr, l, mid, r);
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}