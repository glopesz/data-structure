#include <stdio.h>

int sumMultiplesOfThreeOrFive(int number) {
  if (number > 500) {
    return 0;
  }

  if (number % 5 == 0 || number % 3 == 0) {
    return number + sumMultiplesOfThreeOrFive(number + 1);
  }

  return sumMultiplesOfThreeOrFive(number + 1);
}

int main(void) {
  printf("A soma dos múltiplos de 3 ou 5 entre 1 e 500 é: %d\n",
         sumMultiplesOfThreeOrFive(1));
  return 0;
}
