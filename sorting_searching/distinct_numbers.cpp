// 1621. Distinct Numbers
#include <bits/stdc++.h>
using namespace std;

int main() {
  static int n, x;
  set<int> s;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    s.insert(x);
  }
  printf("%d\n", (int)s.size());
}
