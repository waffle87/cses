// 1070. Permutations
#include <bits/stdc++.h>
using namespace std;

int main() {
  static int num;
  scanf("%d", &num);
  if (num == 1)
    printf("1 ");
  else if (num <= 3)
    printf("NO SOLUTION\n");
  else {
    for (int i = 2; i <= num; i += 2)
      printf("%d ", i);
    for (int i = 1; i <= num; i += 2)
      printf("%d ", i);
  }
}
