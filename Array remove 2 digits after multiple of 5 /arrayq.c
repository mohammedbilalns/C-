#include "stdlib.h"
#include <stdio.h>

int main() {
  int arr[50], arrSize, i, newArr[50], newArrIndex = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &arrSize);

  printf("Enter the elements : ");
  for (i = 0; i < arrSize; i++) {
    scanf("%d", &arr[i]);
  } // get the values

  system("clear"); // clear screen

  printf("Array is : ");
  for (i = 0; i < arrSize; i++) {
    printf("%d\t", arr[i]);
  } // display array

  for (i = 0; i < arrSize;) {
    if (arr[i] % 5 == 0) {
      newArr[newArrIndex] = arr[i];
      i += 3; // skip two index
      newArrIndex++;

    } else {
      newArr[newArrIndex] = arr[i];
      i += 1;
      newArrIndex++;
    }
  }
  printf("\nArray after removal is: ");
  for (i = 0; i < newArrIndex; i++) {
    printf("%d\t", newArr[i]);
  }

  return 0;
}