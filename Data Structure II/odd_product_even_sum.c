#include <stdio.h>

void processNumbers(int count, int index, long long oddProduct,
                    long long evenSum) {
  int number;

  if (index > count) {
    printf("Produto dos ímpares: %lld\n", oddProduct);
    printf("Soma dos pares: %lld\n", evenSum);
    return;
  }

  printf("Digite o %dº número: ", index);
  if (scanf("%d", &number) != 1) {
    printf("Entrada inválida.\n");
    return;
  }

  if (number % 2 == 0) {
    evenSum += number;
  } else {
    oddProduct *= number;
  }

  processNumbers(count, index + 1, oddProduct, evenSum);
}

int main(void) {
  int count;

  printf("Quantos números deseja digitar? ");
  if (scanf("%d", &count) != 1 || count <= 0) {
    printf("A quantidade deve ser um inteiro positivo.\n");
    return 1;
  }

  /* The product starts at 1, the multiplicative identity. */
  processNumbers(count, 1, 1, 0);
  return 0;
}
