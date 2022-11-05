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
    string s = "ksdfjbdiugbkjsdfvbniasdghfviulaughsddvasbndvbhasiljbna";
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;
    for (auto i : m)
        cout << i.first << " " << i.second << endl;
    return 0;
}