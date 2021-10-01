#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
// this method works like this
// whenevr a number n is a multiple of 2 it has only one set bit which is the right most bit
// and whenever we use n & (n-1) it is always zero for the numbers which are a power of 2.
// to get n-1 we just flip the bits from the right most set bit(1).
bool ispower0f2(int n)
{
    return n && !(n & (n - 1));
}
int main()
{
    cout << ispower0f2(16);
}