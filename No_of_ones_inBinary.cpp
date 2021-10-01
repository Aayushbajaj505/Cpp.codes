#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int noOfOnes(int n)
{
    int c = 0;
    while (n)
    {
        n = n & (n - 1);
        c++;
    }
    return c;
}
int main()
{
    cout << noOfOnes(19);
}