// 1754. Coin Piles
#include <bits/stdc++.h>
using namespace std;

int main() {
  static int t, a, b;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d %d", &a, &b);
    printf((((a + b) % 3) != 0 || a > 2 * b || b > 2 * a) ? "NO\n" : "YES\n");
  }
}
