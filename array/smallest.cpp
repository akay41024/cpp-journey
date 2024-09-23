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
    int smallest = INT_MAX;

    for(int i=0; i<n; i++){
        // first approach
        // if(arr[i] < smallest){
        //     smallest = arr[i];
        // }
        // second approach
        smallest = min(smallest, arr[i]);
    }

    cout << "The smallest element in the array is: " << smallest << endl;
    

}