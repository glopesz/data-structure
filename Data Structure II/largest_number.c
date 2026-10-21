#include <stdio.h>

int readLargestNumber(int count, int index, int largestValue) {
  int number;

  if (index > count) {
    return largestValue;
  }

  printf("Digite o %dº número: ", index);
  if (scanf("%d", &number) != 1) {
    printf("Entrada inválida.\n");
    return largestValue;
  }

  if (index == 1 || number > largestValue) {
    largestValue = number;
  }

  return readLargestNumber(count, index + 1, largestValue);
}

int main(void) {
  int count, largestValue;

  printf("Quantos números deseja digitar? ");
  if (scanf("%d", &count) != 1 || count <= 0) {
    printf("A quantidade deve ser um inteiro positivo.\n");
    return 1;
  }

  /* The initial value is ignored for the first number read. */
  largestValue = readLargestNumber(count, 1, 0);
  printf("Maior número digitado: %d\n", largestValue);
  return 0;
}
