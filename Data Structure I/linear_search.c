#include <locale.h>
#include <stdio.h>
#define M 20
int array[M];

void main(void) {
  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL));
  int i;
  for (i = 0; i < M; i++) {
    array[i] = rand() % 100;
  }

  int searchValue;
  printf("Insira um valor de 0 a 100 para buscar no vetor: ");
  scanf("%d", &searchValue);

  printf("------------ Valores do vetor -----------\n");
  for (i = 0; i < M; i++) {
    printf("%d, ", array[i]);
  }
  printf("\n-----------------------------------------\n");
  int found = 0;
  for (i = 0; i < M && found == 0; i++) {
    if (array[i] == searchValue) {
      found = 1;
    }
  }
  if (found == 1)
    printf("\nO valor %d foi encontrado na posição %d", searchValue, i);
  else
    printf("\nO valor %d não foi encontrado", searchValue);
}
