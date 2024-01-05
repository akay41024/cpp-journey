#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    string ans;
    while (n > 0)
    {
        ans += ((n%2) + '0');
        n /= 2;
    }
    reverse(ans.begin(), ans.end());

    cout<< ans;

    return 0;
}