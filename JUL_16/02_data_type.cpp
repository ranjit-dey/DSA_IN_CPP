#include<iostream>
using namespace std;

int main()
{
    cout << endl;

    int a = 56;
    char ch = 'a';
    float f = 56.23;
    double db = 54.36;
    bool isLoggedIn = false;

    cout << a << " " << ch << " " << f << " " << db << " " << isLoggedIn << endl ;

    cout << sizeof(a) << endl;
    cout << sizeof(ch) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(db) << endl;
    cout << sizeof(isLoggedIn);

    cout << endl;
    return 0;
}