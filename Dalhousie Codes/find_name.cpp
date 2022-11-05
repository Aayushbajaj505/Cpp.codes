#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
bool binary_search(vector<string> s, string key)
{
    int st=0;
    int e=s.size();
    while(st<e){
        int m=st+(e-1)/2;
        if(s[m].compare(key))
            return true;
        else{}
    }
}
int main()
{
}