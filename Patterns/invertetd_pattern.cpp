#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int x = n; x >= 1; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << y;
        }
        cout << endl;
    }
}