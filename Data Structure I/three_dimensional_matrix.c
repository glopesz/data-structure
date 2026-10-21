#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define X 4
#define Y 5
#define Z 3

int matrix3D[X][Y][Z];

void main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, j, k;

  srand(time(NULL));
  for (k = 0; k < Z; k++)
    for (i = 0; i < X; i++)
      for (j = 0; j < Y; j++)
        matrix3D[i][j][k] = rand() % 100;

  for (k = 0; k < Z; k++) {
    printf("------------- Face %d --------------\n", k + 1);
    for (i = 0; i < X; i++) {
      for (j = 0; j < Y; j++) {
        printf("%d\t", matrix3D[i][j][k]);
      }
      printf("\n");
    }
    printf("-------------------------------------\n");
  }
}
