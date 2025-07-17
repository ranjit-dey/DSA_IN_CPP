#include<iostream>
using namespace std;

int main()
{
    cout << endl;

    int a;
    cout << "Enter number : ";

    cin >> a;

    a > 0 ? cout << "Positive" : a < 0 ? cout << "Negative" : cout << "Zero" ;

    cout << endl;
    return 0;
}