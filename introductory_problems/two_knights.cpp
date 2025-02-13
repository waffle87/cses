// 1072. Two Knights
#include <bits/stdc++.h>
using namespace std;

int main() {
  static int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    long long cnt = 1LL + (i - 1) * (i - 2) / 2;
    cnt = cnt * (i - 1) * (i + 4);
    printf("%lld\n", cnt);
  }
}
