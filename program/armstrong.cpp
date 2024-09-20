#include<bits/stdc++.h>

using namespace std;

int main(){
    int number;
    cin >> number;
    int num = number;
    int digit,sum = 0;
    int length = to_string(num).length();
    for(int i = 0; i < length; i++)
    {
        digit = int(num % 10);
        num /= 10;
        sum += pow(digit,length);
    }
    if(sum == number){
        cout << "Armstrong Number" << endl;
    }else{
        cout << "Not an Armstrong Number" << endl;
    }
    
    return 0;
}