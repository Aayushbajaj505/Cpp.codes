#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "abcdcba";
    int l = 0;
    int r = s.length() - 1;
    while (l < r)
    {
        if (s[l++] != s[r--])
            cout << "false";
    }
    cout << "true";
}