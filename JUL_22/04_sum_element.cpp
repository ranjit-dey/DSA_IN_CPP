#include<iostream>
using namespace std;

void takeInput(){

}

int main()
{
    cout << endl;

    
    int arr[] = {12, 23,45,26,1,2,5,31,4,13};

    int sum = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        sum = (sum + arr[i]);
    }

    cout << "sum : " << sum;


    cout << endl;
    return 0;
}