#include <stdio.h>
#include <locale.h>

#define TAMANHO_NUM 5

int main(void) {
  setlocale(LC_ALL, "");

  int num = 0;

  wprintf(L"Insira um n%lcmero inteiro de 5 d%lcgitos: ", L'ú', L'í');
  scanf("%d", &num);

  if (num / 10000 >= 10 || num / 10000 < 1) {
    wprintf(L"N%lcmero inv%lclido, favor tentar novamente.", L'ú', L'á');
    return 0;
  }

  if (num / 10000 == num % 10 && 
    num % 10000 / 1000 == (num % 100) / 10) {
    wprintf(L"%d %lc um Pal%lcndromo!", num, L'é', L'í');
  } else {
    wprintf(L"%d n%lco %lc um Pal%lcndromo!", num, L'ã', L'é', L'í');
  }

  return 0;
}