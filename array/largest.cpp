#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout<< "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int largest = INT_MIN;

    for(int i=0; i<n; i++){
        largest = max(largest, arr[i]);
    }

    cout << "The largest element in the array is: " << largest << endl;
    

}