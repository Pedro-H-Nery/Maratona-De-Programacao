#include <iostream>

using namespace std;

int main()
{
    int n, m;
    long long res, auxN, auxM;

    while (cin >> n && cin >> m)
    {
        auxN = 1;
        auxM = 1;
        for (int i = 2; i <= n; i++)
        {
            auxN *= i;
        }

        for (int j = 2; j <= m; j++)
        {
            auxM *= j;
        }

        res = auxN + auxM;

        cout << res << endl;
    }

    return 0;
}