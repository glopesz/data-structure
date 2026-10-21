#include <locale.h>
#include <stdio.h>

#define TAM 30
int array[TAM];

void main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i;
  srand(time(NULL));
  for (i = 0; i < TAM; i++)
    array[i] = rand() % 200; // Generate random values
  for (i = 0; i < TAM; i++)
    printf("%d, ", array[i]); // Print the values
  printf("\nO maior valor no vetor é: %d", max(0, -99999));
}
int max(int index, int largestValue) {
  if (index < TAM) {
    if (largestValue < array[index])
      largestValue = array[index];
    return largestValue = max(index + 1, largestValue);
  }
  return largestValue;
}
