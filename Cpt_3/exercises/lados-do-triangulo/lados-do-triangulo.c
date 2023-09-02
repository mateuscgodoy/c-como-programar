#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  float ladoA = 0, ladoB = 0, ladoC = 0;

  wprintf(L"Insira os 3 lados do seu tri%lcngulo: ", L'â');
  scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

  if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA) {
    wprintf(L"Temos um tri%lcngulo!", L'â');
  } else {
    wprintf(L"Os lados fornecidos não formam um tri%lcngulo.", L'â');
  }

  return 0;
}