#include<iostream>
using namespace std;

int main()
{
    cout << endl;

    int i = 2;

    int n;
    cout << "enter a number : ";
    cin >> n;

    int count = 0;

    while (i < n)
    {
        if(n%i == 0) {
            cout << "Not prime a number.";
            break;
        }else {
            count++;
        }

        i++;
    }

    if(count == n-2) cout << "Prime Number";
    

    cout << endl;
    return 0;
}