/* 1 grama = 12 grãos */
/* 1 kilograma = 1000 gramas */
/* 1 kilograma = 1000 * 12 grãos * = 12000 graõs*/
/* 12000 grãos = 375 * 32 = 375 * 2^5 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x;
    long long kg = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        kg = (kg + pow(2, x - 5)) / 375;
        cout << kg << " kg" << endl;
        kg = 1; /* Valor Inicial de Grãos */
    }

    return 0;
}