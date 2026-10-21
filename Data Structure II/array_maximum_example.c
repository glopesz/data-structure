#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Find the largest value in an integer array.

int findMaximum(int *values, int count) {
  int index, largestValue = values[0];
  for (index = 0; index < count; index++) {
    if (largestValue < values[index])
      largestValue = values[index];
  }
  return largestValue;
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  int count;
  printf("Insira a quantidade de termos do vetor V: ");
  scanf("%d", &count);
  int values[count];
  int index;
  srand(time(NULL));
  for (index = 0; index < count; index++) {
    values[index] = (rand() % 1000) * -1;
    printf("%d, ", values[index]);
  }
  printf("\nO maior valor do vetor é: %d", findMaximum(values, count));
  return 0;
}
