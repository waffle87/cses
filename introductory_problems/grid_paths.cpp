// 1625. Grid Paths
#include <bits/stdc++.h>
using namespace std;

const int n = 7;
int ans;
char c[n * n + 1];
bool vis[n + 1][n + 1];

bool inbound(int x, int y) { return 1 <= x && x <= n && 1 <= y && y <= n; }

void dfs(int x, int y, int i) {
  if (i == n * n - 1 || (x == n && y == 1)) {
    ans += (i == n * n - 1 && (x == n && y == 1));
    return;
  }
  if ((!inbound(x + 1, y) || vis[x + 1][y]) &&
      (!inbound(x - 1, y) || vis[x - 1][y]))
    if (inbound(x, y - 1) && !vis[x][y - 1] && inbound(x, y + 1) &&
        !vis[x][y + 1])
      return;
  if ((!inbound(x, y + 1) || vis[x][y + 1]) &&
      (!inbound(x, y - 1) || vis[x][y - 1]))
    if (inbound(x + 1, y) && !vis[x + 1][y] && inbound(x - 1, y) &&
        !vis[x - 1][y])
      return;
  vis[x][y] = true;
  if (c[i] == 'D' || c[i] == '?')
    if (inbound(x + 1, y) && !vis[x + 1][y])
      dfs(x + 1, y, i + 1);
  if (c[i] == 'U' || c[i] == '?')
    if (inbound(x - 1, y) && !vis[x - 1][y])
      dfs(x - 1, y, i + 1);
  if (c[i] == 'R' || c[i] == '?')
    if (inbound(x, y + 1) && !vis[x][y + 1])
      dfs(x, y + 1, i + 1);
  if (c[i] == 'L' || c[i] == '?')
    if (inbound(x, y - 1) && !vis[x][y - 1])
      dfs(x, y - 1, i + 1);
  vis[x][y] = false;
}

int main() {
  scanf(" %s", c);
  dfs(1, 1, 0);
  printf("%d\n", ans);
}
