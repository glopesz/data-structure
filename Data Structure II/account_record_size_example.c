#include <locale.h>
#include <stdio.h>
#include <string.h>

struct Date {
  int month;
  int day;
  int year;
};
struct Account {
  int accountNumber;
  char accountType;
  char name[80];
  float balance;
  struct Date lastPayment;
};

void printAccount(struct Account account) {
  printf("\n------- Conta pessoal -------");
  printf("\nNúmero da conta: %d", account.accountNumber);
  printf("\nNome do titular: %s", account.name);
  printf("\nTipo de conta: %c", account.accountType);
  printf("\nSaldo: %.2f", account.balance);
  printf("\nData do último pagamento: %d/%d/%d.", account.lastPayment.day, account.lastPayment.month, account.lastPayment.year);
}

int main() {
  struct Account account;
  account.accountNumber = 168;
  account.accountType = 'C';
  strcpy(account.name, "José Caldas");
  account.balance = 234.09;
  account.lastPayment.day = 5;
  account.lastPayment.month = 9;
  account.lastPayment.year = 2026;
  printAccount(account);
  printf("\nO tamanho em bytes na memória do computador utilizado é");
  printf(" %d bytes.", sizeof(account));
  return 0;
}
