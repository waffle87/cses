// 1608. Weird Algorithm
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long num;
  scanf("%lld", &num);
  while (num > 1) {
    printf("%lld ", num);
    num = num & 1 ? 3 * num + 1 : num / 2;
  }
  printf("1\n");
}
