#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, aux;
    long resultado = 0;
    string v, nLeds = "6255456376";

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        for (int j = 0; j < v.length(); j++)
        {
            resultado += int(nLeds[int(v[j]) - 48]) - 48;
        }
        cout << resultado << " leds" << endl;
        resultado = 0;
    }

    return 0;
}