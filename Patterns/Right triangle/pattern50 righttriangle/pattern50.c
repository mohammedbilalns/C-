#include "stdio.h"

int main() {

  int n = 6, i, j, k;

  for (i = 1; i <= n; i++) {
    k = 1;
    for (j = 1; j <= 2 * i; j++) {

      printf("%d", k);
      k = j < i ? k + 1 : j > i ? k - 1 : k;
    }
    printf("\n");
  }

  return 0;
}