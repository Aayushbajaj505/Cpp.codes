#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;

void reversestringinarray(vector<string> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        string res = "";
        char c;
        for (int j = 0; j < arr[i].length(); j++)
        {
            c = arr[i][j];
            res = c+res;
            // cout<<res<<endl;
        }
        arr[i] = res;
    }
    for (auto i : arr)
    {
        cout << i<<endl;
    }
}
int main()
{
    vector<string> arr = {"Classroom", "college", "lecture"};
    reversestringinarray(arr);
    return 0;
}