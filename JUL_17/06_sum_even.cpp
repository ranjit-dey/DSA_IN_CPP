#include<iostream>
using namespace std;

int main()
{
    cout << endl;

    cout << "--:: Enter a series to find sum of all even numbers ::--" << endl;

    int firstVal;
    cout << "Enter first value of series : ";
    cin >> firstVal;
    int initial = firstVal;

    int lastVal;
    cout << "Enter last value of series : ";
    cin >> lastVal;

    int sum = 0;

    while (firstVal <= lastVal){
        if((firstVal&1) == 0) sum += firstVal;
        firstVal++;
    }

    cout << "Sum of all even numbers between " << initial << " and " << lastVal << " is: " << sum;

    cout << endl;
    return 0;
}