#include<iostream>
using namespace std;

/*
n = 4

1
2 1
3 2 1
4 3 2 1
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
        while (j <= i)
        {
            cout << " " << i-j+1;
            j++;
        }
        cout << endl;
        i++;
        
    }

    cout << endl;
    return 0;
}