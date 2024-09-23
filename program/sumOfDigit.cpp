#include<iostream>


using namespace std;

int sumOfDigit(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


int main(){
    int num;
    cin >> num;
    cout<< sumOfDigit(num) << endl;
    return 0;
}