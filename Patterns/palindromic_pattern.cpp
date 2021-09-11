#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int x = 1; x <= n; x++)
    {
        int y;
        for (y = 1; y <= n - x; y++)
        {
            cout << "  ";
        }
        int k = x;
        for (; y <= n; y++)
        {
            cout << k-- << ' ';
        }
        k = 2;
        for (; y <= n + x - 1; y++)
        {
            cout << k++ << ' ';
        }
        cout << endl;
    }
}