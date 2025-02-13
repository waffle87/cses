// 1092. Two Sets
#include <bits/stdc++.h>
using namespace std;

int main() {
  static int n;
  scanf("%d", &n);
  if (n % 4 == 1 || n % 4 == 2)
    printf("NO\n");
  else if (n % 4 == 3) {
    printf("YES\n");
    printf("%d\n", n / 2);
    for (int i = 2; i <= n / 2; i += 2)
      printf("%d %d ", i, n - i);
    printf("%d\n%d\n", n, n / 2 + 1);
    for (int i = 1; i <= n / 2; i += 2)
      printf("%d %d ", i, n - i);
  } else {
    printf("YES\n");
    printf("%d\n", n / 2);
    for (int i = 2; i <= n / 2; i += 2)
      printf("%d %d ", i, n - i + 1);
    printf("\n%d\n", n / 2);
    for (int i = 1; i <= n / 2; i += 2)
      printf("%d %d ", i, n - i + 1);
  }
}
