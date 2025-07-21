#include<iostream>
using namespace std;

int main()
{
    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;
    
    switch (n)
    {

    default:
        cout << "Entered in default behavior";
        break;

    case 1 ... 5:
        cout << "Enetered between 1 to 5.";
        break;

    case 6:
    case 7:
        cout << "Entered 6 or 7";
        break;

    case 9:
        cout << "entered 9";
    
    case 10:
        switch (n)
        {
        case 10:
            cout << "Entered in nested switch";
            break;
        
        default:
            break;
        }
    
    
    }

    cout << endl;
    return 0;
}