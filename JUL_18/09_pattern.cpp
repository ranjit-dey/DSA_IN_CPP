#include<iostream>
using namespace std;

/*
n = 3
A B C
B C D
C D E

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

        while(j < n){
            cout << char(65+j+i) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    return 0;
}