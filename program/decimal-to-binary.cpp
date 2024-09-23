#include <bits/stdc++.h>

using namespace std;


string decimalToBinary(int n)
{
    string ans;
    while (n > 0)
    {
        ans += ((n%2) + '0');
        n /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    int n;
    cin >> n;
    cout << decimalToBinary(n) << endl;

    return 0;
}