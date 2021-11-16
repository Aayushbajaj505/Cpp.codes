#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
void rotate(int n, int *arr)
{
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    rotate(5, arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}