#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "");

  int numA, numB;

  printf("Entre dois numeros para descobrir\n");
  wprintf(L"quais rela%lc%lces eles satisfazem!\n", L'ç', L'õ');

  scanf("%d", &numA);
  scanf("%d", &numB);

  if(numA == numB) {
    wprintf(L"%d %lc igual a %d\n", numA,L'é', numB);
  }

  if(numA != numB) {
     wprintf(L"%d %lc diferente de %d\n", numA,L'é', numB);
  }

  if(numA < numB) {
     wprintf(L"%d %lc maior que %d\n", numA,L'é', numB);
  }

  if(numA > numB) {
     wprintf(L"%d %lc menor que %d\n", numA,L'é', numB);
  }

  return 0;
}
