#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << '*';
        }
        int space = 2 * n - 2 * x;
        for (int y = 1; y <= space; y++)
        {
            cout << " ";
        }
        for (int y = 1; y <= x; y++)
        {
            cout << '*';
        }
        cout << endl;
    }
    for (int x = n; x >= 1; x--)

    {
        for (int y = 1; y <= x; y++)
        {

            cout << '*';
        }
        int space = 2 * n - 2 * x;
        for (int y = 1; y <= space; y++)
        {
            cout << " ";
        }
        for (int y = 1; y <= x; y++)
        {

            cout << '*';
        }
        cout << endl;
    }
}
