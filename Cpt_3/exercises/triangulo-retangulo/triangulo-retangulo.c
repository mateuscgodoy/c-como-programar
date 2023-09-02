#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int ladoA = 0, ladoB = 0, ladoC = 0, temp = 0;

  wprintf(L"Insira os dois primeiros lados do seu tri%lcngulo: ", L'â');
  scanf("%d %d", &ladoA, &ladoB);

  if (ladoB > ladoA) {
    temp = ladoB;
    ladoB = ladoA;
    ladoA = temp;
  }

  wprintf(L"Insira o %lcltimo lado do seu tri%lcngulo: ", L'ú', L'â');
  scanf("%d", &ladoC);

  if (ladoC > ladoA) {
    temp = ladoC;
    ladoC = ladoA;
    ladoA = temp;
  }

  if (ladoB * ladoB + ladoC * ladoC == ladoA * ladoA) {
    wprintf(L"Temos um tri%lcngulo ret%lcngulo!!", L'â', L'â');
  } else {
    wprintf(L"As medidas informadas n%lco formam um tri%lcngulo ret%lcngulo.", L'ã', L'â', L'â');
  }

  return 0;
}