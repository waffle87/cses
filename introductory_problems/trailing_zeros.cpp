// 1618. Trailing Zeros
#include <bits/stdc++.h>
using namespace std;

int main() {
  static int n, ans;
  scanf("%d", &n);
  while (n) {
    n /= 5;
    ans += n;
  }
  printf("%d\n", ans);
}
