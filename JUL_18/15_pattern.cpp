#include<iostream>
using namespace std;

/*
n = 4

1 1 1 1
  2 2 2
    3 3
      4

      1
    2 2
  3 3 3
4 4 4 4

1 2 3 4
  2 3 4
    3 4 
      4

      1
    2 3
  4 5 6
7 8 9 10

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
        while (j < n)
        {
            if(j < i){
                cout << "  ";
            }
            else {
                cout << " " << i+1;
            }
            j++;
        }
        cout << endl;
        i++;
        
    }

    cout << endl;

    int k = 0;
    while(k < n){
        int j = 0;
        while (j < n)
        {
            if(j < n-k-1){
                cout << "  ";
            }
            else {
                cout << " " << k+1;
            }
            j++;
        }
        cout << endl;
        k++;
        
    }

    cout << endl;

    int l = 0;
    while(l < n){
        int j = 0;
        int start = j;
        while (j < n)
        {
            if(j < l){
                cout << "  ";
            }
            else {
                cout << " " << l+start+1;
                start++;
            }
            j++;
        }
        cout << endl;
        l++;
        
    }

    cout << endl;

    int m = 0;
    int start = 1;
    while(m < n){
        int j = 0;
        while (j < n)
        {
            if(j < n-m-1){
                cout << "  ";
            }
            else {
                cout << " " << start;
                start++;
            }
            j++;
        }
        cout << endl;
        m++;
        
    }

    cout << endl;
    return 0;
}