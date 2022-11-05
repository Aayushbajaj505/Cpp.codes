#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
string binary_search(vector<string> s, string key)
{
    int st = 0;
    int e = s.size() - 1;
    while (st <= e)
    {
        int m = (st + (e - 1)) / 2;
        // cout << s[m];
        if (key == s[m])
        {
            return "true";
        }
        if (key > s[m])
            st = m + 1;
        if (key < s[m])
            e = m - 1;
    }
    return "false";
}
int main()
{
    vector<string> a = {"Aayush", "Ajay", "rajni", "Stool", "smol", "boops"};
    cout << binary_search(a, "abc");
    return 0;
}