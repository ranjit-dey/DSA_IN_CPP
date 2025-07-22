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

void swapAlternative(int arr[], int size)
{
    int first = 0;
    int second = 1;

    while (first < size && first != size-1)
    { 
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;

        first+=2;
        second+=2;
    }
}

int main()
{
    cout << endl;

    int arr[] = {1, 2, 36, 45, 85, 32, 44, 5, -6, -89, 77, 32, 20};
    int brr[] = {5, 3, 1, 6};
    int crr[] = {6, 2, 8, 65, 44};

    printArray(arr, 13);
    swapAlternative(arr, 13);
    printArray(arr, 13);

    printArray(brr, 4);
    swapAlternative(brr, 4);
    printArray(brr, 4);

    printArray(crr, 5);
    swapAlternative(crr, 5);
    printArray(crr, 5);

    cout << endl;
    return 0;
}