#include "stdbool.h"
#include "stdio.h"

void displayArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d\t", arr[i]);
  }
  printf("\n");
}

bool isPrime(int number) {
  int i;
  if (number <= 1) {
    return false;
  } else {
    for (i = 2; i * i <= number; i++) {
      if (number % i == 0) {
        return false;
      }
    }
  }
  return true;
}
int main() {
  int i, firstnonPrimeIndex;
  int arr[] = {5, 3, 6, 3, 2, 33, 23, 42, 23};
  int arrSize = sizeof(arr) / sizeof(arr[0]);

  printf("Original array is: ");
  displayArray(arr, arrSize);

  for (i = 0; i < arrSize; i++) {
    if (isPrime(arr[i]) == false) {
      printf("first non prime is : %d \n", arr[i]);
      firstnonPrimeIndex = i;
      break;
    }
  }

  for (i = firstnonPrimeIndex + 1; i < arrSize - 3; i++) {
    arr[i] = arr[i + 3];
  }
  printf("Array after removal: ");
  displayArray(arr, arrSize - 3);
}