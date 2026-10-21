#include <stdio.h>

int sumFromOne(int number) {
  if (number == 1) {
    return 1;
  }

  return number + sumFromOne(number - 1);
}

int main(void) {
  printf("A soma dos números de 1 a 100 é: %d\n", sumFromOne(100));
  return 0;
}
