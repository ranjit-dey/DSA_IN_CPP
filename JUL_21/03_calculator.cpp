#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    cout << endl;

    int a;
    cout << "Enter a first value : ";
    cin >> a;

    int b;
    cout << "Enter a second value : ";
    cin >> b;

    char op;
    cout << "Enter a operation : ";
    cin >> op;

    cout << "\noperation : " << op << endl;

    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;

    default:
        cout << "Invalid Arguments (use integer values and operation only (+, -, *, /))";
        break;
    }

    cout << endl;
    return 0;
}