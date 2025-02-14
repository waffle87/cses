// 2205. Gray Code
#include <bits/stdc++.h>
using namespace std;

static int n;
const int max_n = 16;
static bool a[max_n + 1];

void print(void) {
  for (int i = n; i; i--)
    printf("%d", a[i]);
  printf("\n");
}

int main() {
  scanf("%d", &n);
  print();
  for (int i = 1; i < 1 << n; i++) {
    int lsb = __builtin_ffs(i);
    a[lsb] ^= 1;
    print();
  }
}
