// 1071. Number Spiral
#include <bits/stdc++.h>
using namespace std;

long long x, y;

long long solve(long long x, long long y) {
  long long z = fmax(x, y) - 1;
  if (z & 1)
    return x < y ? z * z + x : z * z + 2 * z - y + 2;
  else
    return x < y ? z * z + 2 * z - x + 2 : z * z + y;
}

int main() {
  static int tmp;
  scanf("%d", &tmp);
  for (int i = 0; i < tmp; i++) {
    scanf("%lld %lld", &x, &y);
    printf("%lld\n", solve(x, y));
  }
}
