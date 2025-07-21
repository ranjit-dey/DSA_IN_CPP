#include<iostream>
using namespace std;


/* == You can't use break in a infinite loop == */
int main()
{
    cout << endl;

    
    int i = 0;
    while(1){
        cout << "\nEntered in Switch\n";
        switch (i)
        {
        case 0 ... 10:
            cout << "Code Running for i = " << i;
            break;
        
        default:
            cout << "Code stopped running as the value of i is greater than 10";
            exit(1); 
        }
        i++;
    }

    cout << endl;
    return 0;
}