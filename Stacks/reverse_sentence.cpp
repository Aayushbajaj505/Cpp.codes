#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
using namespace std;
// reverse a sentence
void reverse(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

// reverse a stack
void reversestack(stack<int> &st)
{
    int ele = st.top();
    st.pop();
    reversestack(st);
    // insertAtBottom();
}
int main()
{
    string s = "Hey how are you doing";
    reverse(s);
}