#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
int longestsubstr(string s)
{
    vector<int> dict(256, -1);
    int maxlen = 0, start = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (dict[s[i]] > start)
            start = dict[s[i]];
        dict[s[i]] = i;
        maxlen = max(maxlen, i - start);
    }
    return maxlen;
}
int main()
{
    cout<<longestsubstr("abcdabcbndef");
}