#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0) return 1;
    else if(n == 1) return 1;
    else if(n == 2) return 2;
    else return n * factorial(n-1);
}

int nCr(int n, int r){
    return factorial(n)/(factorial(r) * factorial(n-r));
}

int main()
{
    cout << endl;

    int n;
    cout << "Enter n : ";
    cin >> n;
    

    int r;
    cout << "Enter r : ";
    cin >> r;

    cout << n << "C" << r << " = " << nCr(n, r);
    

    cout << endl;
    return 0;
}