#include <omp.h> // OpenMP parallelism
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Odd-even sort
void odd_even_sort(int *arr, int n) {
  int isSorted = 0;
  while (!isSorted) {
    isSorted = 1;

// Odd phase
#pragma omp parallel for shared(arr, n) reduction(&& : isSorted)
    for (int i = 1; i < n - 1; i += 2) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        isSorted = 0;
      }
    }

// Even phase
#pragma omp parallel for shared(arr, n) reduction(&& : isSorted)
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

// Print array values
void printArray(const char *label, int *arr, int n) {
  printf("%s: [", label);
  for (int i = 0; i < n; i++) {
    printf("%d%s", arr[i], (i == n - 1) ? "" : ", ");
  }
  printf("]\n");
}

int main() {
  int n = 8;
  srand(time(NULL));

  // Already sorted input
  int sortedArray[] = {1, 2, 3, 4, 5, 6, 7, 8};
  printf("--- Teste 1: Já Ordenado ---\n");
  odd_even_sort(sortedArray, n);
  printArray("Resultado", sortedArray, n);

  // Reverse-ordered input
  int reverseArray[] = {8, 7, 6, 5, 4, 3, 2, 1};
  printf("\n--- Teste 2: Ordem Inversa ---\n");
  odd_even_sort(reverseArray, n);
  printArray("Resultado", reverseArray, n);

  // Random input
  int randomArray[8];
  for (int i = 0; i < n; i++)
    randomArray[i] = rand() % 100;
  printf("\n--- Teste 3: Valores Aleatórios ---\n");
  printArray("Antes", randomArray, n);
  odd_even_sort(randomArray, n);
  printArray("Depois", randomArray, n);

  // Repeated values
  int repeatedValues[] = {5, 1, 5, 2, 1, 9, 5, 3};
  printf("\n--- Teste 4: Elementos Repetidos ---\n");
  printArray("Antes", repeatedValues, n);
  odd_even_sort(repeatedValues, n);
  printArray("Depois", repeatedValues, n);

  return 0;
}