#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
using namespace std;
bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> v;
    // stored the number and its location in the original array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        v.push_back(make_pair(arr[i], i));
    }
    // sorted the array according to numbers in the array
    sort(v.begin(), v.end(), myCompare);
    // now we edit the original array and place their original indexes back
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    // print the array
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i];
    }
}