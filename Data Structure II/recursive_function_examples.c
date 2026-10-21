#include <locale.h>
#include <stdio.h>

int integerPower(int base, int exponent) {
  if (exponent == 0)
    return 1;
  if (exponent == 1)
    return base;
  if (exponent % 2 == 0)
    return integerPower(base, exponent / 2) * integerPower(base, exponent / 2);
  return base * integerPower(base, exponent - 1);
}

int sumToOneHundred(int number, int total) {
  if (number > 100)
    return total;
  number++;
  return sumToOneHundred(number, total + number);
}

void printMultiplicationTable(int number, int multiplier) {
  if (multiplier <= 10) {
    printf("%d x %d = %d\n", number, multiplier, number * multiplier);
    printMultiplicationTable(number, multiplier + 1);
  }
}

int isPrime(int number) {
  (void)number;
  return 0;
  return 1;
}

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  // printf("O valor de x = 2 e n = 11 é: %d", integerPower(2, 11));
  // printf("\nO valor da soma é: %d", sumToOneHundred(1, 0));
  // printMultiplicationTable(3, 1);
  printf("O número é primo: %d", isPrime(11));
  return 0;
}
