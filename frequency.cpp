#include <iostream>

using namespace std;

int main() {

  string n;
  cin >> n;
  int a[255] = {0};

  for (int i = 0; i <= n.size(); i += 2) {
    a[n[i]] += (n[i + 1] - '0');
  }

  string ans;

  for (int i = 0; i < 255; i++) {
    if (a[i] != 0) {
      ans += i;
      ans += (a[i] + '0');
    }
  }
  cout << ans;
  return 0;
}