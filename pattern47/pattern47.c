#include "stdio.h"

int main() {
  int i, j, k;

  int malayalam[] = {'M', 'A', 'L', 'A', 'Y', 'A', 'L', 'A', 'M'};
  int malayalamSize = sizeof(malayalam) / sizeof(malayalam[0]);

  for (i = 1; i <= malayalamSize; i++) {
    k = 1;
    for (j = 1; j <= i; j++) {
      printf("%c", malayalam[k - 1]);
      k++;
    }
    printf("\n");
  }
}