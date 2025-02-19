// 1623. Apple Division
#include <bits/stdc++.h>
using namespace std;

int main() {
  const long long max = INT_MAX;
  static int n, p[20];
  long long a, b, best = max;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &p[i]);
  for (int i = 0; i < (1 << n); i++) {
    a = b = 0;
    for (int j = 0; j < n; j++) {
      if (i & (1 << j))
        a += p[j];
      else
        b += p[j];
    }
    best = min(best, abs(a - b));
  }
  printf("%lld\n", best);
}
