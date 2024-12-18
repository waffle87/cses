// 1069. Repetitions
#include <bits/stdc++.h>
using namespace std;

const int max_size = 1e6 + 5;

int main() {
  char str[max_size];
  scanf(" %s", str);
  int num = strlen(str), curr = 1, cnt = 1;
  for (int i = 1; i < num; i++) {
    curr = str[i] == str[i - 1] ? curr + 1 : 1;
    cnt = max(cnt, curr);
  }
  printf("%d\n", cnt);
}
