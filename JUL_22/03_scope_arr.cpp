#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void updateArr(int arr[], int size)
{
    cout << endl
         << "Inside updateArr function.\n";

         // updating the value of the first index of the actual array ,
    arr[0] = 5;
    printArray(arr, size);

    cout << endl
         << "Going back to Main function\n";
}

int main()
{
    cout << endl;

    int arr[3] = {12, 10, 23};
    
    // passing the address of the first element which is also the base address of the array
    updateArr(arr, 3);

    cout << endl
         << "Inside the Main function";

    printArray(arr, 3);

    cout << endl;
    return 0;
}