#include <iostream>
using namespace std;

bool isEven(int num) { 
    return !(num & 1); 
}

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;

    isEven(n) ? cout << n << " is even." : cout << n << " is odd.";

    cout << endl;
    return 0;
}