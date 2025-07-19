#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int a = 0;
    int b = 1;

    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (n == 1)
        cout << "0 ";
    else if (n == 2)
        cout << "0 1 ";
    else
    {
        cout << "0 1 ";
        for (int i = 0; i < n - 2; i++)
        {
            int nextnum = a + b;
            cout << nextnum << " ";
            a = b;
            b = nextnum;
        }
    }

    cout << endl;
    return 0;
}