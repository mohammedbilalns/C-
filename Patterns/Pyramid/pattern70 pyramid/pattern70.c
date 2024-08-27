#include "stdio.h"

int main() {

  int n = 4, k = 0;
  for (int i = 1; i <= 2 * n; i++) {
    k = i <= n ? k + 1 : i > n + 1 ? k - 1 : k;
    for (int j = 1; j <= 2 * k - 1; j++) {
      if (j % 2 == 1) {
        printf("%d", k);
      } else {
        printf("*");
      }
    }
    printf("\n");
  }
}