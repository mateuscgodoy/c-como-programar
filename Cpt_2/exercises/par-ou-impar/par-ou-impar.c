#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int numero;

  wprintf(L"Insira um n%lcmero inteiro positivo para descobrir se ele %lc PAR ou %lcMPAR!\n", L'ú', L'é', L'Í');
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    wprintf(L"%d %lc PAR!", numero, L'é');
  }

  if (numero % 2 != 0) {
    wprintf(L"%d %lc %lcMPAR!", numero, L'é', L'Í');
  }

  return 0;
}