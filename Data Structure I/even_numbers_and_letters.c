#include <locale.h>
#include <stdio.h>

int evenNumbers[10];
void main(void) {
  setlocale(LC_ALL, "Portuguese");
  int index;
  for (index = 0; index < 10; index++) {
    printf("Insira o %dº número par: ", (index + 1));
    scanf("%d", &evenNumbers[index]);
  }
  printf("\n\nOs números inseridos foram: ");
  int i;
  for (i = 0; i < 10; i++) {
    printf("%d, ", evenNumbers[i]);
  }
  printf("\n\nOs ímpares menores que os números inseridos são: ");

  for (i = 0; i < 10; i++) {
    printf("%d, ", (evenNumbers[i] - 1));
  }

  char letters[6];
  letters[0] = 'A';
  letters[1] = 'E';
  letters[2] = 'I';
  letters[3] = 'O';
  letters[4] = 'U';

  int j;
  printf("\nAs letras inseridas são: ");
  for (j = 0; j < 6; j++) {
    printf("%c, ", letters[j]);
  }
}
