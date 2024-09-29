#include<bits/stdc++.h>

using namespace std;

void swapMaxMinArray(int arr[], int n){
    int max = 0;
    int min = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[max]){
            max = i;
        }
        if(arr[i] < arr[min]){
            min = i;
        }
    }
    swap(arr[max], arr[min]);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    swapMaxMinArray(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}