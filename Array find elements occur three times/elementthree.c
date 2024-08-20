#include <stdio.h>

int main() {
  int i, j, n, array[100], count = 0, visited[100] = {0};
  printf("enter the array limit\n");
  scanf("%d", &n);
  printf("the array elements are:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  printf("the exact three count of :\n");
  for (i = 0; i < n; i++) {
    int count = 1;
    if (visited[i] == 1) {
      continue;
    }
    for (j = i + 1; j < n; j++) {
      if (array[i] == array[j]) {
        visited[i] = 1, visited[j] = 1;
        count++;
      }
    }
    if (count == 3) {
      printf("%d\n", array[i]);
    }
  }
  return 0;
}