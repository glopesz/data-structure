#include <locale.h>
#include <stdio.h>

void main(void) {
  setlocale(LC_ALL, "Portuguese");
  printf("\n");
  printf("O valor de 5! é: %d\n", factorialIterative(5));
  int term;
  printf("Digite o termo a ser buscado na sequência de Fibonacci: ");
  scanf("%d", &term);
  printf("O valor do %dº termo de Fibonacci é: ", term);
  printf("%d\n", fibonacciIterative(term));
  printf("O valor do %dº termo de Fibonacci é: ", term);
  printf("%d\n", fibonacciRecursive(term));
}

int factorialRecursive(int number) {
  if (number == 0)
    return 1;
  if (number > 0)
    return number * factorialRecursive(number - 1);
}

int factorialIterative(int number) {
  int result = 1, i;
  for (i = 1; i <= number; i++) {
    result = result * i;
  }
  return result;
}

int fibonacciRecursive(int number) {
  if (number == 0)
    return 0;
  if (number == 1)
    return 1;
  if (number > 1)
    return fibonacciRecursive(number - 1) + fibonacciRecursive(number - 2);
}

int fibonacciIterative(int number) {
  if (number == 0)
    return 0;
  if (number == 1 || number == 2)
    return 1;
  int previousValue = 1, nextValue, currentValue = 1;
  while (number > 2) {
    nextValue = previousValue + currentValue;
    previousValue = currentValue;
    currentValue = nextValue;
    number = number - 1;
  }
  return nextValue;
}
