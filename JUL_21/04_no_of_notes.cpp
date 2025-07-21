#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;

    // note : 1 rupee
    // note : 20 rupees
    // note : 50 rupees
    // note : 100 rupees

    if (n >= 100)
    {
        cout << "Number of 100 notes : " << n / 100 << endl;
        n = n % 100;
    }

    if (n >= 50)
    {
        cout << "Number of 50 notes : " << n / 50 << endl;
        n = n % 50;
    }

    if (n >= 20)
    {
        cout << "Number of 20 notes : " << n / 20 << endl;
        n = n % 20;
    }

    if (n >= 1)
    {
        cout << "Number of 1 notes : " << n << endl;
        // n = n/50;
    }

    cout << endl;
    return 0;
}