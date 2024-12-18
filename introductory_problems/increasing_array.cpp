// 1094. Increasing Array
#include <bits/stdc++.h>
using namespace std;

int main() {
  static int arr_size;
  static long long arr, curr, cnt;
  scanf("%d", &arr_size);
  scanf("%lld", &curr);
  for (int i = 1; i < arr_size; i++) {
    scanf("%lld", &arr);
    curr = max(curr, arr);
    cnt += (curr - arr);
  }
  printf("%lld\n", cnt);
}
