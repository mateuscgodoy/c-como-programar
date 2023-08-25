#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int numA, numB;

  wprintf(L"Vamos descobrir se 2 n%lcmeros s%lco m%lcltiplos!\n", L'ú', L'ã', L'ú');
  wprintf(L"Insira 2 n%lcmeros inteiros positivos: ", L'ú');
  scanf("%d %d", &numA, &numB);

  if (numA % numB == 0) {
    wprintf(L"%d e %d s%lco m%lcltiplos!!\n", numA, numB, L'ã', L'ú');
  }

  if (numA % numB != 0) {
    wprintf(L"%d e %d n%lco s%lco m%lcltiplos.\n", numA, numB, L'ã', L'ã', L'ú');
  }

  if (numB % numA == 0) {
    wprintf(L"%d e %d s%lco m%lcltiplos!!\n", numB, numA, L'ã', L'ú');
  }

  if (numB % numA != 0) {
    wprintf(L"%d e %d n%lco s%lco m%lcltiplos.\n", numB, numA, L'ã', L'ã', L'ú');
  }

  return 0;
}