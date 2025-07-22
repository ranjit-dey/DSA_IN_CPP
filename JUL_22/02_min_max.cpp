#include <iostream>
using namespace std;

void min_max(int arr[], int size){
    int max = arr[0];
    int min = arr[0];

    int i=0;
    while(i < size){
        if(arr[i] > max){
            max  = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
        i++;
    }

    cout << "Minimum value : " << min << endl;
    cout << "Maximum value : " << max << endl;
}

int main()
{
    cout << endl;

    int arr[] = {45, 2, 36, 8, 12, 52, 65, 2, 1};

    min_max(arr, 9);

    cout << endl;
    return 0;
}