#include "stdio.h"

int main() {

  int n = 4, k = 0, l = 2;
  for (int i = 1; i <= 2 * n; i++) {
    k += i <= n ? 1 : i > n + 1 ? -1 : 0;
    for (int j = 1; j <= k; j++) {

      printf("%d ", j < k ? l++ : l);
    }
    if (i < n) {
      l++;
    } else if (i == n) {
      l = l - k + 1;
    } else {
      l = l - 2 * k + 2;
    }
    printf("\n");
  }
  return 0;
}