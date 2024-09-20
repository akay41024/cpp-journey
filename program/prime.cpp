#include <bits/stdc++.h>

using namespace std;

void isPrime(int n)
{
    if (n <= 1)
    {
        cout << "Not Prime";
        return;
    }
    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    isPrime(n);
}
