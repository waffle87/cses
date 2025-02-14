// 1755. Palindrome Reorder
#include <bits/stdc++.h>
using namespace std;

int main() {
  static char s[1000001];
  scanf("%s", s);
  static int n = strlen(s), odd = -1, freq[26];
  for (int i = 0; i < n; i++)
    freq[s[i] - 'A']++;
  for (int i = 0; i < 26; i++) {
    if (freq[i] & 1) {
      if (odd != -1) {
        printf("NO SOLUTION\n");
      } else {
        odd = i;
      }
    }
  }
  for (int i = 0; i < 26; i++)
    for (int j = 0; j < freq[i] / 2; j++)
      printf("%c", i + 'A');
  if (odd != -1)
    printf("%c", odd + 'A');
  for (int i = 25; i >= 0; i--)
    for (int j = 0; j < freq[i] / 2; j++)
      printf("%c", i + 'A');
}
