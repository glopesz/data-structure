#include <locale.h>
#include <stdio.h>

int matrix[3][2];
int oppositeMatrix[3][2];

void main(void) {
  setlocale(LC_ALL, "Portuguese");
  matrix[0][0] = 12;
  matrix[0][1] = 21;
  matrix[1][0] = 6;
  matrix[1][1] = 5;
  matrix[2][0] = -3;
  matrix[2][1] = 8;
  int i, j;
  printf("----------- Matriz original ----------\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
  printf("---------------------------------------\n");
  printf("----------- Matriz oposta ----------\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      oppositeMatrix[i][j] = matrix[i][j] * -1;
      printf("%d\t", oppositeMatrix[i][j]);
    }
    printf("\n");
  }
  printf("---------------------------------------\n");
  printf("----------- Matriz nula ----------\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d\t", (matrix[i][j] + oppositeMatrix[i][j]));
    }
    printf("\n");
  }
  printf("---------------------------------------\n");
  // Identity matrix
  printf("---------- Matriz identidade -----------\n");
  int size = 3;
  int identityMatrix[size][size]; // A 3-by-3 identity matrix

  for (i = 0; i < size; i++)
    for (j = 0; j < size; j++)
      identityMatrix[i][j] = 0;

  identityMatrix[0][0] = identityMatrix[1][1] = identityMatrix[2][2] = 1;
  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      printf("%d\t", identityMatrix[i][j]);
    }
    printf("\n");
  }
  printf("---------------------------------------\n");
  printf("------ Matriz original transposta -----\n");
  for (j = 0; j < 2; j++) {
    for (i = 0; i < 3; i++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
  printf("---------------------------------------\n");
}
