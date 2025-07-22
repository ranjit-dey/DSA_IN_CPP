#include<iostream>
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


void reverseArr(int arr[], int size){
    int first = 0;
    int last = size-1;

    while(first < last){
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;

        first++;
        last--;
    }

}

int main()
{
    cout << endl;

    int arr[] = {1, 2, 36, 45, 85, 32, -65, 4, 12, 85, 44, 67, 223, 14, 1, 5, -6, -89, 77, 32, 20};
    int brr[] = {5, 3, 1, 6};
    int crr[] = {6, 2, 8, 65, 44};

    printArray(arr, 21);
    reverseArr(arr, 21);
    printArray(arr, 21);

    printArray(brr, 4);
    reverseArr(brr, 4);
    printArray(brr, 4);

    printArray(crr, 5);
    reverseArr(crr, 5);
    printArray(crr, 5);

    cout << endl;
    return 0;
}