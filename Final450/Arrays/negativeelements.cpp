#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
void negative(int *arr, int size)
{
    int j = 0;
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j++]);
        }
    }
}
int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    negative(arr, 8);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i]<<" ";
    }
}