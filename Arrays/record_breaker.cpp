// tags - kickstart

// Isyana is given the number of visitors at her local theme park on N consecutive
// days. The number of visitors on the i-th day is Vi

// . A day is record breaking if it

// satisfies both of the following conditions:

// ● The number of visitors on the day is strictly larger than the number of
// visitors on each of the previous days.

// ● Either it is the last day, or the number of visitors on the day is strictly larger
// than the number of visitors on the following day.

// Note that the very first day could be a record breaking day!
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    arr[n] = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxN = -1;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxN && arr[i] > arr[i + 1])
        {
            c++;
        }
        maxN = max(c, arr[i]);
    }
    cout << c;
}