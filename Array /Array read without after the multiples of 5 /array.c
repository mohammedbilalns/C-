#include "stdio.h"
#include "stdlib.h"
// Write a program in C to read n number of values in an array and display the
// array after skipping two values next to the multiples of 5
void displayArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
int main() {

  int arrSize;
  printf("Enter the number of elements: ");
  scanf("%d", &arrSize);

  int arr[arrSize];
  printf("Enter %d elements:\n", arrSize);
  for (int i = 0; i < arrSize; i++) {
    scanf("%d", &arr[i]);
  }

  system("clear");
  printf("Original array: ");
  displayArray(arr, arrSize);

  printf("Array after removal");
  for (int i = 0; i < arrSize; i++) {
    if (arr[i] % 5 == 0) {
      printf("%d ", arr[i]);
      i += 2;
    } else {
      printf("%d ", arr[i]);
    }
  }
}