#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
// get the bit from the postioion given and the number
int getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setbit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearbit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int updatebit(int n, int pos, int bit)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return n | (bit << pos);
}
int main()
{
    cout << getbit(5, 2) << endl;
    cout << setbit(5, 1) << endl;
}