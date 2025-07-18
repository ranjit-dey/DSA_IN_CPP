#include<iostream>
using namespace std;

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;
    

    int i = 0;
    
    while(i < n){
        int j = 0, start = 1;
        while (j < n+i)
        {
            if(j < n-i-1){
                cout << "  ";
            }
            else if(j >= n){
                cout << " " << --start - 1;
            }
            else {
                cout << " " << start;
                start++;
            }

            j++;
        }
        cout<< endl;
        i++;
        
    }

    cout << endl;
    return 0;
}