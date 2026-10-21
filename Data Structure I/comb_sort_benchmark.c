#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10000

void combSort(int arr[], int n);

int main() {
  int array[TAM];
  clock_t startTime, endTime;

  srand(time(NULL));

  // Already sorted input
  for (int i = 0; i < TAM; i++) {
    array[i] = i;
  }

  startTime = clock();
  combSort(array, TAM);
  endTime = clock();
  printf("Ordenado: %f segundos\n", (double)(endTime - startTime) / CLOCKS_PER_SEC);

  // Reverse-ordered input
  for (int i = 0; i < TAM; i++) {
    array[i] = TAM - i;
  }

  startTime = clock();
  combSort(array, TAM);
  endTime = clock();
  printf("Ordem inversa: %f segundos\n", (double)(endTime - startTime) / CLOCKS_PER_SEC);

  // Random input
  for (int i = 0; i < TAM; i++) {
    array[i] = rand() % TAM;
  }

  startTime = clock();
  combSort(array, TAM);
  endTime = clock();
  printf("Aleatório: %f segundos\n", (double)(endTime - startTime) / CLOCKS_PER_SEC);

  // Duplicate values
  for (int i = 0; i < TAM; i++) {
    array[i] = rand() % 10;
  }

  startTime = clock();
  combSort(array, TAM);
  endTime = clock();
  printf("Valores repetidos: %f segundos\n", (double)(endTime - startTime) / CLOCKS_PER_SEC);

  return 0;
}

void combSort(int arr[], int n) {
  int gap = n;
  int swapped = 1;

  while (gap > 1 || swapped) {
    gap = (gap * 10) / 13;
    if (gap < 1)
      gap = 1;

    swapped = 0;

    for (int i = 0; i < n - gap; i++) {
      if (arr[i] > arr[i + gap]) {
        int temp = arr[i];
        arr[i] = arr[i + gap];
        arr[i + gap] = temp;
        swapped = 1;
      }
    }
  }
}