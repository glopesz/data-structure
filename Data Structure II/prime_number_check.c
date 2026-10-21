#include <stdio.h>

int isPrime(int number, int divisor) {
  if (number < 2) {
    return 0;
  }

  if (divisor == number) {
    return 1;
  }

  if (number % divisor == 0) {
    return 0;
  }

  return isPrime(number, divisor + 1);
}

int main(void) {
  int number;

  printf("Digite um número: ");
  if (scanf("%d", &number) != 1) {
    printf("Entrada inválida.\n");
    return 1;
  }

  if (isPrime(number, 2)) {
    printf("%d é primo.\n", number);
  } else {
    printf("%d não é primo.\n", number);
  }

  return 0;
}
