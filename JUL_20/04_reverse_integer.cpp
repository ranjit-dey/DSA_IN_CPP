#include <iostream>
#include <limits.h>
using namespace std;

int reverseInteger(int x)
{
    int sum = 0;

    while (x)
    {
        int ld = x % 10;
        if (sum > INT_MAX / 10 || sum < INT_MIN / 10)
            return 0;
        sum = sum * 10 + ld;
        x /= 10;
    }

    return sum;
}

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int result = reverseInteger(n);
    cout << result;

    cout << endl;
    return 0;
}