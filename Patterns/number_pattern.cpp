#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int x = 1; x <= n; x++)
    {
        for (int y = x; y < n; y++)
        {
            cout << " ";
        }
        for (int y = 1; y <= x; y++)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}