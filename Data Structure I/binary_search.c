#include <locale.h>
#include <stdio.h>
#define M 20
int array[M];

void main(void) {
  setlocale(LC_ALL, "Portuguese");

  fillArrayWithRandomValues();
  printArray();
  sortArray();
  printArray();

  int searchValue;
  printf("\n\nInsira um valor de 0 a 100 para buscar no vetor: ");
  scanf("%d", &searchValue);

  binarySearch(searchValue);
}

void printArray() { // Print the array
  int i;
  printf("\n-------------- Valores do vetor -----------\n");
  for (i = 0; i < M; i++) {
    printf("%d, ", array[i]);
  }
}
void fillArrayWithRandomValues() {
  int i;
  for (i = 0; i < M; i++) {
    array[i] = rand() % 100;
  }
}
void sortArray() {
  int temporary, j, i;
  for (j = 0; j < M; j++) {
    for (i = 0; i < (M - 1); i++) {
      if (array[i] > array[i + 1]) {
        temporary = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temporary;
      }
    }
  }
}

void binarySearch(int targetValue) {
  int right, left, middle;
  int found = 0;
  left = 0;
  right = M - 1;
  while (left <= right && !found) {
    middle = (right + left) / 2;
    if (array[middle] == targetValue)
      found = 1;
    else if (targetValue < array[middle])
      right = middle - 1;
    else
      left = middle + 1;
  }
  if (found) {
    printf("\nValor %d encontrado na posicao %d\n", array[middle], middle);
  } else {
    printf("\nValor %d não encontrado\n", targetValue);
  }
}
