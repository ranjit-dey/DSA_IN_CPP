#include <iostream>
using namespace std;

int isFound(int arr[], int size, int key){
    int i = 0;
    while(i < size){
        if(key== arr[i]) return i+1;
        i++;
    }
    return 0;
}

int main()
{
    cout << endl;

    int arr[] = {1, 2, 36, 45, 85, 32, -65, 4, 12, 85, 44, 67, 223, 14, 1, 5, -6, -89, 77, 32, 20};

    cout << "Enter key you want to search for : ";
    int key;
    cin >> key;

    int index = isFound(arr, 21, key);
    index ? cout << "Found at index : " << index : cout << key << " not found.";

    cout
        << endl;
    return 0;
}