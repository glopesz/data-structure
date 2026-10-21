#include <locale.h>
#include <stdio.h>
#include <string.h>
char students[3][20];
void main(void) {
  setlocale(LC_ALL, "Portuguese");
  // Read student names
  int i;
  for (i = 0; i < 3; i++) {
    printf("Insira o %dº nome: ", (i + 1));
    scanf(" %[^\n]", &students[i]);
  }
  printf("\n");
  // Print the stored names
  int j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 20; j++) {
      printf("%c", students[i][j]);
    }
    printf("\n");
  }
}
