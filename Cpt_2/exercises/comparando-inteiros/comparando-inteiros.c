#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int numA, numB;

  wprintf(L"Por favor, insira 2 n%lcmeros.\n", L'ú');
  scanf("%d", &numA);
  scanf("%d", &numB);

  if(numA > numB) {
    wprintf(L"%d %lc maior que %d", numA, L'é', numB);
  }

  if(numA == numB) {
    wprintf(L"Os n%lcmeros s%lco iguais.", L'ú', L'ã');
  }

  if (numA < numB) {
    wprintf(L"%d %lc menor que %d", numA, L'é', numB);
  }

  return 0;
}