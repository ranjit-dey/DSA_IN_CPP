#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    // int size = sizeof(arr)/sizeof(arr[0])

    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main()
{
    cout << endl;

    // creating an array of size 3;
    int arr[10];

    // initialize only the 2th index with zero so, except that all will be garbage
    arr[2] = {0};
    printArray(arr, 10);

    // intialize all the values with zero
    int brr[10] = {0};
    printArray(brr, 10);

    // intialize few indecies, and automatically others will be initialize with 0
    int crr[10] = {2, 7, 5};
    printArray(crr, 10);

    // try to access that index which is not present in the array
    cout << endl
         << "value at 10 of crr -> " << crr[10]; // garbage

    // initialize entire array with a signle value
    //  int drr[20] = {[0 ... 19] = 2}; // not work in c++ try it in c lang
    int drr[20];

    // the below three statements are same
    fill(drr, &drr[19] + 1, -5);
    // fill(drr, &drr[20], 5);
    // fill(drr, drr + 20, 5);
    printArray(drr, 20);


    cout << endl;
    return 0;
}