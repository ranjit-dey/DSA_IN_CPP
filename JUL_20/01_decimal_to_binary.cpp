#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;
    int originalNum = n;
    
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        // formula to reverse
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    
    cout << originalNum << " : " << ans;

    cout << endl;
    return 0;
}