#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_set>
using namespace std;
void interection(int *arr, int s1, int *arr1, int s2)
{
    set<int> hs;
    for (int i = 0; i < s1; i++)
    {
        hs.insert(arr[i]);
    }
    for (int i = 0; i < s2; i++)
    {
        if (hs.find(arr1[i]) != hs.end())
        {
            cout << arr1[i] << endl;
        }
    }
}
void Union(int *arr, int s1, int *arr1, int s2)
{
    unordered_set<int> ui;
    for (int i = 0; i < s1; i++)
    {
        ui.insert(arr[i]);
    }
    for (int i = 0; i < s2; i++)
    {
        ui.insert(arr1[i]);
    }
    for (auto i = ui.begin(); i != ui.end(); ++i)
    {
        cout << (*i) << endl;
    }
}
int main()
{
    int arr1[] = {1, 6, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    // Union(arr1, 5, arr2, 4);
    interection(arr1, 5, arr2, 4);
}