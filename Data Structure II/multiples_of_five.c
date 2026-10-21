#include <stdio.h>

void printMultiplesOfFive(int number) {
  if (number > 500) {
    return;
  }

  if (number % 5 == 0) {
    printf("%d ", number);
  }

  printMultiplesOfFive(number + 1);
}

int main(void) {
  printMultiplesOfFive(1);
  printf("\n");
  return 0;
}
