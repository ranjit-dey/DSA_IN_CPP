#include<iostream>
using namespace std;

int main()
{
    cout << endl;

    char ch;
    cout << "Enter any character (lower/upper/numeric) : ";
    cin >> ch;

    if(ch >= 65 && ch <= 90) cout << "It is in UPPER CASE";
    else if (ch >= 97 && ch <= 122) cout << "It is in lower case";
    else if (ch >= 48 && ch <= 57) cout << "Its numeric" ;

    cout << endl;
    return 0;
}