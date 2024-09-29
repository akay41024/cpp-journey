#include<iostream>

using namespace std;


int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;

    int product = 1;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;
    cout << "Product of array elements: " << product << endl;
    return 0;
}