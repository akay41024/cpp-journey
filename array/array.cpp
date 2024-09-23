#include<iostream>

using namespace std;


int main(){

    int  n;
    cin >> n;
    // int arr[n] = {1,3, 44, 5}; we can do that but it is not recommended in c++
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int x:arr){
        cout << x << endl;
    }

    return 0;
}
