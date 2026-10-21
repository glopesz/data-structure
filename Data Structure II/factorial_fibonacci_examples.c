#include <locale.h>
#include <stdio.h>

int factorialRecursive(int number) {
  if (number == 0)
    return 1;
  if (number > 0)
    return number * factorialRecursive(number - 1);
}

int factorialIterative(int number) {
  int result = 1;
  while (number > 1) {
    result *= number;
    number--;
  }
  return result;
}

int fibonacciRecursive(int number) {
  if (number == 0 || number == 1)
    return number;
  if (number > 1)
    return fibonacciRecursive(number - 1) + fibonacciRecursive(number - 2);
}

int fibonacciIterative(int number) {
  if (number == 0 || number == 1)
    return number;
  int previousValue = 0, currentValue = 1, nextValue;
  int index;
  for (index = 2; index <= number; index++) {
    nextValue = previousValue + currentValue;
    previousValue = currentValue;
    currentValue = nextValue;
  }
  return currentValue;
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  int number;
  printf("Insira um número para calcular o fatorial: ");
  scanf("%d", &number);
  printf("O valor do fatorial é: %d", factorialIterative(number));
  printf("\nDigite a posição do termo de Fibonacci: ");
  scanf("%d", &number);
  printf("\nO valor buscado é: %d", fibonacciIterative(number));
  return 0;
}
