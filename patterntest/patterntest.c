#include <stdio.h>

int main() {
  int i, j, k;
  int arr[] = {1, 2, 0, 0, 4, 0, 5, 6, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
  int newArr[n];
  for (i = 0; i < n; i++) {
    newArr[i] = 0;
  }

  k = 8;
  for (j = n - 1; j >= 0; j--) {
    if (arr[j] != 0) {
      newArr[k--] = arr[j];
    }
  }

  printf("Array after moving zeros:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", newArr[i]);
  }
  return 0;
}