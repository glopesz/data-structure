#include <stdio.h>

/* This implementation assumes the second factor is nonnegative. */
int multiplyByRepeatedAddition(int firstFactor, int secondFactor) {
  if (secondFactor == 0) {
    return 0;
  }

  return firstFactor +
         multiplyByRepeatedAddition(firstFactor, secondFactor - 1);
}

int main(void) {
  int firstFactor, secondFactor;

  printf("Digite o primeiro número (a): ");
  if (scanf("%d", &firstFactor) != 1) {
    return 1;
  }

  printf("Digite o segundo número (b, >= 0): ");
  if (scanf("%d", &secondFactor) != 1 || secondFactor < 0) {
    printf("O segundo número deve ser um inteiro não negativo.\n");
    return 1;
  }

  printf("%d x %d = %d\n", firstFactor, secondFactor,
         multiplyByRepeatedAddition(firstFactor, secondFactor));
  return 0;
}
