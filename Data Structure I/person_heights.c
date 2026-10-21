#include <locale.h>
#include <stdio.h>
#include <string.h>

float personHeights[2];

void main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i;
  for (i = 0; i < 2; i++) {
    printf("Insira o valor da altura da pessoa\n");
    scanf("%f", &personHeights[i]);
  }
  printf("\n\nAs alturas das pessoas são:\t");
  for (i = 0; i < 2; i++) {
    printf("%.2f |\t", personHeights[i]);
  }
}
