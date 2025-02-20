// 2431. Digit Queries
#include <bits/stdc++.h>
using namespace std;

long long pow10(int x) {
  long long res = 1;
  for (int i = 0; i < x; i++)
    res *= 10;
  return res;
}

int solve(long long n) {
  if (n < 9)
    return (int)n + 1;
  int len = 1;
  while (pow10(len - 1) * len * 9 < n) {
    n -= 9 * pow10(len - 1) * len;
    len++;
  }
  string s = to_string(pow10(len - 1) + n / len);
  return (int)(s[n % len] - '0');
}

int main() {
  static int q;
  static long long k;
  scanf("%d", &q);
  for (int i = 0; i < q; i++) {
    scanf("%lld", &k);
    printf("%d\n", solve(k - 1));
  }
}
