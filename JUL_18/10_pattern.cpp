#include<iostream>
using namespace std;

/*
n = 3
A
B C 
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

        while(j <= i){
            cout << char(65+j+i) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    return 0;
}