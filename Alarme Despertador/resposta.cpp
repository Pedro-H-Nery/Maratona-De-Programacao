#include <iostream>
using namespace std;

int main()
{
    int hi, mi, hf, mf, difH, difM;

    cin >> hi >> mi >> hf >> mf;

    while (hi != 0 || mi != 0 || hf != 0 || mf != 0)
    {
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

        cout << (difH * 60) + difM << endl;

        cin >> hi >> mi >> hf >> mf;
    }

    return 0;
}