#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int fatorial = 1;

  wprintf(L"N%lcmero\t\tFatorial\n", L'ú');

  for (int i = 1; i <= 5; i++) {
    fatorial *= i;
    printf("%d\t\t%d\n", i, fatorial);
  }

  return 0;
}