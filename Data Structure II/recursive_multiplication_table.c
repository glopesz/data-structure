#include <stdio.h>

void printMultiplicationTable(int number, int multiplier) {
  if (multiplier > 10) {
    return;
  }

  printf("%d x %d = %d\n", number, multiplier, number * multiplier);
  printMultiplicationTable(number, multiplier + 1);
}

int main(void) {
  int number;

  printf("Qual tabuada deseja imprimir? ");
  if (scanf("%d", &number) != 1) {
    printf("Entrada inválida.\n");
    return 1;
  }

  printMultiplicationTable(number, 1);
  return 0;
}
