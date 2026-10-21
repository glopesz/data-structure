#include <locale.h>
#include <stdio.h>

void main(void) {
  setlocale(LC_ALL, "Portuguese");
  // Print a sample file path
  printf("\nO caminho do arquivo é c:\\novo_arquivo");

  int x, y, result;
  printf("\nInsira o valor de X ");
  scanf("%d", &x);
  printf("Insira o valor de Y ");
  scanf("%d", &y);
  result = x + y;
  printf("O resultado da soma de X + Y é: %d.\n", result);

  char name[20];
  printf("Insira seu \"nome\" aqui: ");
  scanf(" %[^\n]", name);
  printf("O nome inserido foi: %s", name);
}
