#include <stdio.h>

int integerSquareRootByOddSubtraction(int remainingValue, int nextOdd,
                                      int rootEstimate) {
  if (remainingValue <= 0) {
    return rootEstimate;
  }

  return integerSquareRootByOddSubtraction(remainingValue - nextOdd,
                                           nextOdd + 2, rootEstimate + 1);
}

int main(void) {
  int number;

  printf("Digite um inteiro não negativo: ");
  if (scanf("%d", &number) != 1 || number < 0) {
    printf("Digite um inteiro não negativo válido.\n");
    return 1;
  }

  printf("Raiz quadrada inteira aproximada: %d\n",
         integerSquareRootByOddSubtraction(number, 1, 0));
  return 0;
}
