#include "stdio.h"

int main() {

  int n = 5, i, j, k = -1;
  for (i = 1; i <= 2 * n - 1; i++) {
    k = i <= n ? k + 2 : k - 2;
    for (j = 1; j <= 2 * n - 1; j++) {
      if (j >= 2 * n - k) {
        printf("*");

      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}