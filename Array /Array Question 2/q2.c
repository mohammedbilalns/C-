#include "stdbool.h"
#include "stdio.h"

void displayArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
} // display 1d array

bool isNegative(int number) { return number < 0; } // check negative

int main() {
  int i, j, temp, sumOfnonNeg = 0, nonngeCount = 0, negIndex = 0;
  int arr[] = {3, 5, -3, 2, 5, 6, -4, -2, 5, 6, -8};
  int arrSize = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: ");
  displayArray(arr, arrSize);

  for (i = 0; i < arrSize; i++) {
    if (isNegative(arr[i])) {
      temp = arr[i];

      for (j = i; j > negIndex; j--) {
        arr[j] = arr[j - 1];
      } // mv non neg to right
      arr[negIndex] = temp;
      negIndex++;
    } else {
      sumOfnonNeg += arr[i];
      nonngeCount++;
    }
  }

  printf("Final array: ");
  displayArray(arr, arrSize);

  if (nonngeCount > 0) {
    printf("Average of non-negatives: %f\n", (float)sumOfnonNeg / nonngeCount);
  } else {
    printf("No non-negative numbers to calculate average.\n");
  }

  return 0;
}
