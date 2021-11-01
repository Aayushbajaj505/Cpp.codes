#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1); //string from the first character
    reverse(ros);             //iterate till the end
    cout << s[0];             //print the first character
}
int main()
{
    reverse("binod");
}