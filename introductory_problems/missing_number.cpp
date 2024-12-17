// 1083. Missing Number
#include <bits/stdc++.h>
using namespace std;

int main() {
  static int num, xum, x;
  scanf("%d", &num);
  for (int i = 1; i <= num; i++)
    xum ^= i;
  for (int i = 0; i < num - 1; i++) {
    scanf("%d", &x);
    xum ^= x;
  }
  printf("%d\n", xum);
}
