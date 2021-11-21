#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
struct Interval
{
    int start, end;
};
bool compareIntervals(Interval a, Interval b)
{
    return a.start < b.start;
}
int MergeIntervals(Interval arr[], int n)
{
    if (int n = 0)
    {
        return 0;
    }
    // sort the intervals according to the first number
    sort(arr, arr + n, compareIntervals);
    // create an emepty stack
    stack<Interval> s;
    // push the first element to the stack
    s.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        // get the top of the stack
        Interval top = s.top();
        // is the end is smaller than the start of the next
        if (top.end < arr[i].start)
        {
            // we push the interval to stack
            s.push(arr[i]);
        }
        // if the end is smaller than the end of the next
        else if (top.end < arr[i].end)
        {
            // we update the top and replace it
            top.end = arr[i].end;
            s.pop();
            s.push(top);
        }
    }
}
int main()
{
}