#include<iostream>
using namespace std;

/*
n = 3

123
456
789
*/

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;
    

    int i = 0;
    int num = 1;

    while(i < n){
        int j = 0;
        while (j < n){
            cout << "\t" << num;
            num++;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    return 0;
}