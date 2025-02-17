// 2165. Tower of Hanoi
#include <bits/stdc++.h>
using namespace std;

void move(int from, int to, int depth) {
  if (depth == 1) {
    printf("%d %d\n", from, to);
    return;
  }
  int other = 6 - from - to;
  move(from, other, depth - 1);
  printf("%d %d\n", from, to);
  move(other, to, depth - 1);
}

int main() {
  static int n;
  scanf("%d", &n);
  printf("%d\n", (1 << n) - 1);
  move(1, 3, n);
}
