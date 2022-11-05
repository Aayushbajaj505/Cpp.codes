#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
void countvowels(vector<string> s)
{
    unordered_map<string, int> res;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < s[i].length(); j++)
        {
            char ch = s[i][j];
            // cout << c << " ";
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                c++;
            }
        }

        res[s[i]] = c;
    }
    for (auto k : res)
    {
        cout << k.first << " " << k.second << endl;
    }
}
int main()
{
    vector<string> a = {"aman", "daman", "jot"};
    countvowels(a);
}