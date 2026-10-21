#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date {
  int day;
  int month;
  int year;
};

struct Account {
  int number;
  char name[40];
  float balance;
  struct Date openingDate;
  struct Date lastPayment;
};

void insertAccount(struct Account *account);
void insertDate(struct Date *date);

void printAccount(struct Account account);
void printDate(struct Date date);

void main(void) {
  setlocale(LC_ALL, "Portuguese");

  struct Account accounts[3]; // Three account records

  accounts[0].number = 1234;
  strcpy(accounts[0].name, "Juliano Ratusznei");
  accounts[0].balance = 123.45;
  accounts[0].openingDate.day = 01;
  accounts[0].openingDate.month = 01;
  accounts[0].openingDate.year = 1999;
  accounts[0].lastPayment.day = 05;
  accounts[0].lastPayment.month = 04;
  accounts[0].lastPayment.year = 2026;

  insertAccount(&accounts[1]);
  insertAccount(&accounts[2]);

  int i;
  for (i = 0; i < 3; i++)
    printAccount(accounts[i]);
}

void insertAccount(struct Account *account) {
  printf("\nInsira o número da conta: ");
  scanf("%d", &account->number);
  printf("Insira o nome do portador da conta: ");
  scanf(" %[^\n]s", &account->name);
  printf("Insira o saldo da conta: ");
  scanf("%f", &account->balance);
  printf("Insira a data de abertura da conta: ");
  insertDate(&account->openingDate);
  printf("Insira a data do último pagamento: ");
  insertDate(&account->lastPayment);
}

void insertDate(struct Date *date) {
  printf("Insira o dia: ");
  scanf("%d", &date->day);
  printf("Insira o mês: ");
  scanf("%d", &date->month);
  printf("Insira o ano: ");
  scanf("%d", &date->year);
}

void printAccount(struct Account account) {
  printf("\n------------- Conta nº %d --------------------", account.number);
  printf("\nNome do portador: %s", account.name);
  printf("\nSaldo da conta: %.2f", account.balance);
  printf("\nData de abertura: ");
  printDate(account.openingDate);
  printf("\nData do último pagamento: ");
  printDate(account.lastPayment);
  printf("\n----------------------------------------------");
}

void printDate(struct Date date) {
  printf("%d / %d / %d.", date.day, date.month, date.year);
}
