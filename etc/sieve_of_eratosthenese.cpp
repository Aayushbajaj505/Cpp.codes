#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
// THis helps us to find prime numbers uptill a given number
void primeSieve(int n)
{
    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    primeSieve(n);
}