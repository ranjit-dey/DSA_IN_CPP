#include<iostream>
using namespace std;

/*
n = 5 

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
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
            cout << " " << i+1+j;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    return 0;
}