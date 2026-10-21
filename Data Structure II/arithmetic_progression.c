#include <stdio.h>

void printArithmeticProgression(int currentTerm, int commonDifference,
                                int upperLimit) {
  if (currentTerm > upperLimit) {
    return;
  }

  printf("%d ", currentTerm);
  printArithmeticProgression(currentTerm + commonDifference, commonDifference,
                             upperLimit);
}

int main(void) {
  int commonDifference, firstTerm, upperLimit;

  printf("Digite a razão (maior que zero): ");
  if (scanf("%d", &commonDifference) != 1 || commonDifference <= 0) {
    printf("A razão deve ser um inteiro maior que zero.\n");
    return 1;
  }

  printf("Digite o primeiro elemento: ");
  if (scanf("%d", &firstTerm) != 1) {
    printf("Entrada inválida.\n");
    return 1;
  }

  printf("Digite o limite superior: ");
  if (scanf("%d", &upperLimit) != 1) {
    printf("Entrada inválida.\n");
    return 1;
  }

  if (firstTerm > upperLimit) {
    printf("O primeiro elemento ultrapassa o limite; nada a imprimir.\n");
    return 0;
  }

  printf("Progressão aritmética: ");
  printArithmeticProgression(firstTerm, commonDifference, upperLimit);
  printf("\n");
  return 0;
}
