#include <iostream>
using namespace std;

int main()
{
    int hi, mi, hf, mf, difH, difM;

    cin >> hi >> mi >> hf >> mf;

    difH = hf - hi;
    difM = mf - mi;

    if (difH == 0 && difM == 0)
        difH = 24;

    if (difM < 0)
    {
        difM += 60;
        difH -= 1;
    }

    if (difH < 0)
        difH += 24;

    cout << "O JOGO DUROU " << difH << " HORA(S) E " << difM << " MINUTO(S)" << endl;

    return 0;
}