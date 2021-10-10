#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int r = n % 10;
    return r + sumOfDigits(n / 10);
}
int countofDigits(int n)
{
    if (n < 10)
    {
        return 1;
    }
    return 1 + countofDigits(n / 10);
}
int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
    cout << countofDigits(n);
}