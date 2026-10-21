#include <locale.h>
#include <stdio.h> // Standard input and output

void main(void) { // Program entry point
  setlocale(LC_ALL, "Portuguese");
  printf("Olá, turma!"); // Print a greeting

  // Variable types
  int x, y = 9;       // Integer
  float pi = 3.1415;  // Floating-point number
  char letter;        // Character
  letter = 'A';       // Character literals use single quotes
  int isDisabled = 0; // Boolean-like integer flag

  // Single-line comment example

  /* Block comment example
     This comment spans multiple lines.
  */

  int z = 9;
  x = 2;
  // Arithmetic operators
  // +, -, *, /, %, --, ++
  x = x + y;
  x -= y; // x = x - y;
  y = y * z;
  z = z / x; // Integer division
  y = y % 2;
  x++;
  y--;
  --x;
  ++y;

  // Relational operators
  // >, <, <=, >=, ==, !=
  printf(x > y ? "\nsim" : "\nnão"); // \n starts a new line
  if (x < y) {
    printf("\nY é maior que X");
  } else {
    printf("\nX é maior que Y");
  }

  // Logical operators
  // &&, ||, ! represent AND, OR, and NOT
  y = 142;
  if ((x < y) && (y > 100)) {
    printf("\nY é maior que X e que 100");
  }

  // Loop examples
  int i = 0;
  while (i < 10) {
    printf("\nO valor de i = %d neste caso.", ++i);
  }
  printf("\n");
  i = 0;
  do {
    printf("%d, ", i++);
  } while (i < 10);
}
