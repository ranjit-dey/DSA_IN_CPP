#include<iostream>
using namespace std;

/*
n = 4

D
C D
B C D
A B C D

*/

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;
    

    int i = 0;

    while(i < n){
        int j = 0;

        while(j <= i){
            cout << char(64+n-i+j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    return 0;
}