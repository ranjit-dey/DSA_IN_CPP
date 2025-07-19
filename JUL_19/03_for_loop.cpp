#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << endl;
    }

    cout << endl;

    int i = 0;
    for (;;)
    {
        if (i < n)
            cout << i + 1 << endl;
        else
            break;
        i++;
    }

    cout << endl;

    for (int i = 0, j =1, k = 2; i>=0 , j >= 1, k >= 2; i--, j--, k--){
        cout << i << " " << j << " " << k << endl;
    }

    cout << endl;
    return 0;
}