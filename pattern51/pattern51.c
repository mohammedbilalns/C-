#include "stdio.h"

int main() {

  int n = 4, i, j, k = 1;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      if (i % 2 == 1) {

        printf("%d ", k);
        k++;
      } else {
        printf("%d ", k);
        k = (j < i) ? k - 1 : k;
      }
    }
    k = k + i;
    printf("\n");
  }

  return 0;
}