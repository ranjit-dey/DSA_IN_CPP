#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;
    const int bit = 8;
    bitset<bit> binary(n);
    cout << n << " : " << binary;

    cout << endl;
    return 0;
}