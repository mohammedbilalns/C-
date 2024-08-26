#include "stdio.h"

int main() {

  int n = 5, k = 0;

  for (int i = 1; i <= 2 * n; i++) {
    k = i <= n ? k + 1 : i >= n + 2 ? k - 1 : k;
    for (int j = 1; j <= 2 * n; j++) {

      if (j <= n - k + 1 || j >= n + k) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}