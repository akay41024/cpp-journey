#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int original_number = n;
    int result = 0;
    while(original_number != 0){
        int rem = original_number % 10;
        result += rem * rem * rem;
        original_number /= 10; 
    }
    if(result == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}