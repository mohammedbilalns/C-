#include "stdio.h"

int main() {

  int n = 4;
  int k = 4 * n - n + 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 2 * n - 1; j++) {
      if (j % 2 == 1) {
        printf("%d ", k);
        k = j < 2 * n - 1 ? k + 1 : k;

      } else {
        printf("* ");
      }
    }
    k -= 7;
    printf("\n");
  }

  return 0;
}