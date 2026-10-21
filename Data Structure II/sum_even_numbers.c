#include <stdio.h>

int sumEvenNumbers(int number) {
  if (number > 200) {
    return 0;
  }

  return number + sumEvenNumbers(number + 2);
}

int main(void) {
  printf("A soma dos números pares entre 25 e 200 é: %d\n", sumEvenNumbers(26));
  return 0;
}
