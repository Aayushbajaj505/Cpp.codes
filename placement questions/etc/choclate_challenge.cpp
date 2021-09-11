#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 15;
    int sum = 15;
    while (n > 1)
    {
        int temp = n / 3;
        int rem = n % 3;
        sum = sum + temp;
        n = temp + rem;
    }
    cout << sum;
}