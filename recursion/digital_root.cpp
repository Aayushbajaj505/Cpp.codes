#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int digitalRoot(int n)
{
    if (n < 10)
    {
        return n;
    }
    int r = n % 10;
    int sum = r + digitalRoot(n / 10);
    if (sum >= 10)
    {
        return digitalRoot(sum);
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << digitalRoot(n);
}