#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    /* == Program 1 == */
    cout << "== Program 1 ==" << endl;
    int a, b = 1;
    a = 10;

    if (++a)
        cout << b;
    else
        cout << ++b;

    cout << endl
         << endl;

    /* == Program 2 == */
    cout << "== Program 2 ==" << endl;
    int m = 1;
    int n = 2;

    if (m-- > 0 && ++n > 2)
    {
        cout << "Stage1 - Inside If";
    }
    else
    {
        cout << "Stage2 - Inside else";
    }

    cout << endl;
    cout << m << " " << n << endl
         << endl;

    /* == Program 3 == */
    cout << "== Program 3 ==" << endl;
    int p = 1;
    int q = 2;

    if (p-- > 0 || ++q > 2)
    {
        cout << "Stage1 - Inside If";
    }
    else
    {
        cout << "Stage2 - Inside else";
    }

    cout << endl;
    cout << p << " " << q << "\n\n";

    /* == Program 4 == */
    cout << "== Program 4 ==" << endl;
    int num = 3;
    cout << (25 * (++num));

    cout << "\n\n";

    /* == Program 5 == */
    cout << "== Program 5 ==" << endl;
    int x = 1;
    int y = x++;
    int z = ++y;

    cout << y;
    cout << z;

    cout << "\n\n";

    cout << endl;
    return 0;
}