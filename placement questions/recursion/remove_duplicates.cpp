#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
string removeDup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];                      //keep first character
    string ans = removeDup(s.substr(1)); //send the rest of the string
    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}
int main()
{
    cout << removeDup("aaaaabbbbbcccccdddddd");
}