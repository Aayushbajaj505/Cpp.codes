#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int checkSorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    return arr[0] < arr[1] && checkSorted(arr + 1, n - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr1[] = {1, 2, 3, 4, 5, 2};
    cout << checkSorted(arr, 5) << endl;
    cout << checkSorted(arr1, 6);
}