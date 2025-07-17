#include<iostream>
using namespace std;

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int i = 0;
    while (i < n){
        int j = 0;
        while (j < n)   
        {
            cout << i+1;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    return 0;
}