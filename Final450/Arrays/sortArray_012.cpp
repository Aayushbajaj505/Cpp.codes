#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
void sort012(int *arr, int size)
{
    int low, mid = 0;
    int high = size - 1;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid]);
            break;
        case 1:
            arr[mid++];

        case 2:
            swap(arr[mid], arr[high++]);
        }
    }
}
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
}