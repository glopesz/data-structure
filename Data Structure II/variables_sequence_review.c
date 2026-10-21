#include <locale.h>
#include <stdio.h>

void printSequence(int termCount) {
  int index, multiplier = 2;
  for (index = 0; index < termCount; index++) {
    printf("%d, ", multiplier * index);
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  printf("Olá, mundo!");
  int firstValue, secondValue, sum;
  printf("\nInsira um valor para X: ");
  scanf("%d", &firstValue);
  printf("\nInsira um valor para Y: ");
  scanf("%d", &secondValue);
  sum = firstValue + secondValue;
  printf("O valor de X + Y é: %d", sum);

  char name[20];
  printf("\nInsira seu nome: ");
  scanf(" %[^\n]", name);
  printf("\nO nome inserido foi: %s", name);

  int termCount = 6;
  printSequence(termCount);
  return 0;
}
