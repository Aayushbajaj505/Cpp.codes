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
    string A = "LLLLRRRLRLRL";
    stack<char> st;
    int l = A.length();
    for (int i = 0; i < l; i++)
    {
        st.push(A[i]);
        cout << st.top();
    }

    return 0;
}