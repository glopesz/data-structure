#include <locale.h>
#include <malloc.h>
#include <stdio.h>
#include <string.h>

char *name;

void readName() {
  char temporaryName[40];
  printf("\nInsira seu nome: ");
  scanf(" %[^\n]", temporaryName);
  printf("\nO nome inserido foi: %s", temporaryName);
  int length = 0;
  while (temporaryName[length] != '\0') {
    length++;
  }
  printf("\nA quantidade de caracteres do nome é: %d", length);
  name = (char *)malloc((length + 1) * sizeof(char));
  strcpy(name, temporaryName);
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  readName();
  printf("\nO nome na memória dinâmica é: %s", name);

  int *values;
  printf("\n");
  values = (int *)malloc(5 * sizeof(int));
  values[0] = 7;
  values[1] = 11;
  values[3] = -4;
  values[4] = 1;
  int index;
  for (index = 0; index < 5; index++) {
    printf("%d, ", values[index]);
  }
  return 0;
}
