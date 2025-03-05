// 1624. Chessboard and Queens
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

const int n = 8;
char c;
int ans;
bool b[n][n], input[n][n];

bool place(int x, int y) {
  bool valid = true;
  for (int i = 0; i < n; i++)
    if (b[x][i] || b[i][y])
      valid = false;
  for (int i = 0; x - i >= 0 && y + i < n; i++)
    if (b[x - i][y - i])
      valid = false;
  for (int i = 0; x - i >= 0 && y + i < n; i++)
    if (b[x - i][y + i])
      valid = false;
  return valid;
}

bool check(void) {
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (b[i][j] && input[i][j])
        return false;
  return true;
}

void dfs(int i) {
  if (i == n) {
    if (check())
      ans++;
    return;
  }
  for (int j = 0; j < n; j++)
    if (place(i, j)) {
      b[i][j] = true;
      dfs(i + 1);
      b[i][j] = false;
    }
}

int main() {
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      scanf(" %c", &c);
      input[i][j] = (c == '*');
    }
  dfs(0);
  printf("%d\n", ans);
}
