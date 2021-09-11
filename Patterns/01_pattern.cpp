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
            if ((x + y) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}