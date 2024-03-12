#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c, d, e, count;
    cin >> t;
    cin >> a >> b >> c >> d >> e;

    if (t == a)
        count += 1;
    if (t == b)
        count += 1;
    if (t == c)
        count += 1;
    if (t == d)
        count += 1;
    if (t == e)
        count += 1;

    cout << count << endl;

    return 0;
}