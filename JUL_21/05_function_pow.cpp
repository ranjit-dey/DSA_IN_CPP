#include<iostream>
using namespace std;

int result(int base, int power){
    if(power == 1) return base;
    else return base * result(base, --power);
}

int main()
{
    cout << endl;

    int b, p;
    cout << "Enter a base power : ";
    cin >> b >> p;
    
    cout << b << " to the power " << p << " = " << result(b, p);

    cout << endl;
    return 0;
}