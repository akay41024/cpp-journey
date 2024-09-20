#include<bits/stdc++.h>

using namespace std;

int fibonacci(int n){
    int a = 0, b = 1, c;
    if(n == 0){
        cout << a << " ";
        return a;
    }
    cout << a << " " << b << " ";
    for(int i = 2; i < n; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return c;
}
int main()
{
    int n;
    cout <<"Enter the number of terms in the febonacci series : ";
    cin >> n;
    cout <<"Fibonacci series : ";
    fibonacci(n);
    return 0;
}