#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n!=0)
    {
        int bit = n % 10;
        if(bit!=0 || bit != 1) cout << "Invalid bit" ;
        return 1;
        ans = bit * pow(2, i) + ans;
        n /= 10;
        i++;
    }

    cout << ans;

    cout << endl;
    return 0;
}