#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n, metadeFrase;
    string frase, metade1, metade2;
    cin >> n;
    getline(cin, frase);
    for (int i = 0; i < n; i++)
    {
        getline(cin, frase);
        metade1 = "";
        metade2 = "";
        metadeFrase = frase.length() / 2;
        for (int j = 0; j < metadeFrase; j++)
        {
            metade1 += frase[metadeFrase - j - 1];
            metade2 += frase[frase.length() - 1 - j];
        }
        cout << metade1 + metade2 << endl;
    }

    return 0;
}