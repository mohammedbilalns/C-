#include <stdio.h>
int main() {
  int n = 4;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 2 * n - 1; j++) {
      if (j >= n - i + 1 && j <= 2 * n - i) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
  }
}