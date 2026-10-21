#include <locale.h>
#include <stdio.h>
// A lottery ticket contains six numbers.
int ticketNumbers[6];
int ticketContainsNumber(int number);

int main() {
  setlocale(LC_ALL, "Portuguese");

  /////////////////////////////////////////////////////////
  printf("\nInsira os 6 números do bilhete de loteria: ");
  int i, number;
  for (i = 0; i < 6; i++) {
    scanf("%d", &number);
    if (ticketContainsNumber(number)) {
      printf("\nO número está repetido.");
      i--;
    } else
      ticketNumbers[i] = number;

    if ((ticketNumbers[i] > 60) || (ticketNumbers[i] <= 0)) {
      printf("\nNúmero inválido. Insira um valor entre 1 e 60.");
      i--;
    }
  }
  printf("\nOs números do bilhete de loteria são: ");
  for (i = 0; i < 6; i++)
    printf("%d, ", ticketNumbers[i]);
  return 0;
}

// Check whether a number is already on the ticket.
int ticketContainsNumber(int number) {
  int i;
  for (i = 0; i < 6; i++) {
    if (ticketNumbers[i] == number)
      return 1;
  }
  return 0;
}
