//TODO  2 pointer approach for reversing an array

#include<bits/stdc++.h>

using namespace std;

void reverseArray(int arr[], int start, int end){
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    reverseArray(arr, start, end);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
