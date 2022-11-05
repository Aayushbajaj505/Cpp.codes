#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
// algorithm used: backtracking
void permute(string &s, int l, int r)
{
    if (l == r)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = l; i < r; i++)
        {
            swap(s[l], s[i]);
            permute(s, l + 1, r);
            swap(s[l], s[i]);
        }
    }
}
int main()
{
    string s = "ABC";
    permute(s, 0, 3);
}