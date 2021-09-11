#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int x = 1; x <= 3; x++)
    {
        for (int y = 1; y < n; y++)
        {
            if ((x + y) % 4 == 0 || (x == 2 && y % 4 == 0))
            {
                cout << "*";
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}