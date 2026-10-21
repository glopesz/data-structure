#include <stdio.h>

void readNumbersAndPrintHalves(int count) {
  float number;

  if (count > 10) {
    return;
  }

  printf("Digite o %dº número: ", count);
  if (scanf("%f", &number) != 1) {
    printf("Entrada inválida.\n");
    return;
  }

  printf("Metade de %.2f = %.2f\n", number, number / 2.0f);
  readNumbersAndPrintHalves(count + 1);
}

int main(void) {
  readNumbersAndPrintHalves(1);
  return 0;
}
