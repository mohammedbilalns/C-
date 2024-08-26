#include <stdio.h>

int main() {
  int n;
  printf("Enter a value for n: ");
  scanf("%d", &n);

  int k = 1;
  int rows = n;
  int cols = n;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d", k);
      if (j < cols - 1) {
        printf("*");
      }
      k++;
    }
    printf("\n");

    // Adjust k for the next row
    if (i == 0) {
      k = n * n + 1;
    } else if (i == 1) {
      k = n * (n + 1) + 1;
    } else if (i == rows - 2) {
      k = n + 1;
    }
  }

  return 0;
}