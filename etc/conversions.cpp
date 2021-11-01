#include <bits/stdc++.h>
using namespace std;

int binarytodecimal(int n)
{
    int ans = 0;
    int x = 1;

    while (n > 0)
    {
        int r = n % 10;
        ans += x * r;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octaltodecimal(int n)
{
    int ans = 0;
    int x = 1;

    while (n > 0)
    {
        int r = n % 10;
        ans += x * r;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexadecimaltodecimal(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();
}
int main()
{
    string h;
    int n;
    cin >> n >> h;
    cout << binarytodecimal(n) << endl;
    cout << octaltodecimal(n) << endl;
    cout << hexadecimaltodecimal(h) << endl;
}