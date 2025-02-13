// 1617. Bit Strings
#include <bits/stdc++.h>

const int mod = 1e9 + 7;

long long fast_pow2(int x) {
  long long res = 1, y = 2;
  while (x) {
    if (x & 1)
      res = (res * y) % mod;
    y = (y * y) % mod;
    x >>= 1;
  }
  return res;
}

int main() {
  static int n;
  scanf("%d", &n);
  printf("%lld\n", fast_pow2(n));
}
