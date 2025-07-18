#include<iostream>
using namespace std;

/*
n = 4

* * * *
* * *
* * 
*

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
        while (j < n-i)
        {
            cout << " *";
            j++;
        }
        cout << endl;
        i++;
        
    }

    cout << endl;
    return 0;
}