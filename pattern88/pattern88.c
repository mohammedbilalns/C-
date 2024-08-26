#include "stdio.h"

int main() {

  int n = 4;
  int k = 1;
  int l = 2 * n + 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 2 * n - 1; j++) {

      if (i % 2 == 1) {
        if (j % 2 == 1) {
          printf("%d", k++);
        } else {
          printf("*");
        }

      } else {
        if (j % 2 == 1) {
          printf("%d", l++);
        } else {
          printf("*");
        }
      }
    }

    printf("\n");
  }
}