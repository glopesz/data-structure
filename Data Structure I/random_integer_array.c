#include <locale.h>
#include <stdio.h>

#define TAM 100

int array[TAM]; // Stores integer values
void main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, number;
  srand(time(NULL)); // Initialize the random number generator
  for (i = 0; i < TAM; i++) {
    array[i] = rand() % 1000;
  }

  printf("------- Imprimindo Vetor----------\n");
  for (i = 0; i < TAM; i++) {
    printf("%d,\t", array[i]);
  }
}
