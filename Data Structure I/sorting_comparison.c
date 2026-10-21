#include <stdio.h>

// Print array values
void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Odd-even sort
void oddEvenSort(int arr[], int n) {
  int isSorted = 0;

  while (!isSorted) {
    isSorted = 1;

    // Odd phase
    for (int i = 1; i < n - 1; i += 2) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        isSorted = 0;
      }
    }

    // Even phase
    for (int i = 0; i < n - 1; i += 2) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        isSorted = 0;
      }
    }
  }
}

// Bubble sort
void bubbleSort(int arr[], int n) {
  int swapped;

  for (int i = 0; i < n - 1; i++) {
    swapped = 0;

    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = 1;
      }
    }

    if (!swapped)
      break;
  }
}

int main() {
  int original[] = {5, 3, 8, 4, 2};
  int n = 5;

  int arr1[5], arr2[5];

  // Copy the input array
  for (int i = 0; i < n; i++) {
    arr1[i] = original[i];
    arr2[i] = original[i];
  }

  // Run odd-even sort
  oddEvenSort(arr1, n);
  printf("Odd-Even Sort: ");
  printArray(arr1, n);

  // Run bubble sort
  bubbleSort(arr2, n);
  printf("Bubble Sort: ");
  printArray(arr2, n);

  return 0;
}