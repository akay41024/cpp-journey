#include<iostream>

using namespace std;


int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);

    return fact_n / (fact_r * fact_n_r);
}

int main(){
    int n, r;
    cin >> n >> r;
    cout << nCr(n,r) << endl;
    return 0;
}