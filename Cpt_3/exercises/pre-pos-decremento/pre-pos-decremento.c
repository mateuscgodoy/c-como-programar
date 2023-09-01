#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int i = 5, j = 5;

  printf("Valor Inicial de i: %d.\n", i);
  printf("Valor Inicial de j: %d.\n\n", j);

  wprintf(L"========= PR%LC-DECREMENTO de i =========\n", L'É');
  printf("Valor de i: %d\n", --i);
  wprintf(L"========= P%LCS-DECREMENTO de j =========\n", L'Ó');
  printf("Valor de i: %d\n\n", j--);
  printf("Valor Final de i: %d\n", i);
  printf("Valor Final de j: %d\n", j);

  return 0;
}