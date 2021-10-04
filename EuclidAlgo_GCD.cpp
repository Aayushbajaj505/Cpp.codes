#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
// whever we subtract 2 numbers there gcd does not change
int main()
{
    int n, m;
    cin >> n >> m;
    int temp = 1;
    while (temp > 0)
    {
        temp = n % m;
        n = m;
        m = temp;
    }
    cout << n;
}