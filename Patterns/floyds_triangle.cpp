#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 1;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}