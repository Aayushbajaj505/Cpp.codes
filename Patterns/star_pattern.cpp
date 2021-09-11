#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= n - x; y++)
        {
            cout << "  ";
        }
        for (int z = 1; z <= 2 * x - 1; z++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int x = n; x >= 1; x--)
    {
        for (int y = 1; y <= n - x; y++)
        {
            cout << "  ";
        }
        for (int z = 1; z <= 2 * x - 1; z++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}