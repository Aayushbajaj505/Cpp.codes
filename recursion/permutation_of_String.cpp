#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];                                //fix one letter
        string ros = s.substr(0, i) + s.substr(i + 1); //the whole strign without that letter
        permutation(ros, ans + ch);
    }
}
int main()
{
    permutation("ABC", "");
}