#include <iostream>
using namespace std;

int main()
{
    long x, m, xp;

    cin >> x >> m;
    while (x != 0 && m != 0)
    {
        xp = x * m;
        cout << xp << endl;
        cin >> x >> m;
    }

    return 0;
}