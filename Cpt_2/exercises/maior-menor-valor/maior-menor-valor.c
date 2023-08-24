#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int numA, numB, numC;

  wprintf(L"Digite tr%lcs inteiros diferentes: ", L'ê');
  scanf("%d %d %d", &numA, &numB, &numC);

  printf("Soma: %d\n", numA + numB + numC);
  wprintf(L"M%lcdia: %d\n", L'é', (numA + numB + numC) / 3);
  printf("Produto: %d\n", numA * numB * numC);

  if (numA < numB && numA < numC)
  {
    wprintf(L"O menor %lc %d\n", L'é', numA);

    if(numB > numC) {
      wprintf(L"O maior %lc %d\n", L'é', numB);
    }
    
    if(numC > numB) {
      wprintf(L"O maior %lc %d\n", L'é', numC);
    }

    if(numC == numB) {
      wprintf(L"C %lc igual a B valendo %d\n", L'é', numB);
    }
  }

  if (numB < numA && numB < numC)
  {
    wprintf(L"O menor %lc %d\n", L'é', numB);

    if(numA > numC) {
      wprintf(L"O maior %lc %d\n", L'é', numA);
    }
    
    if(numC > numA) {
      wprintf(L"O maior %lc %d\n", L'é', numC);
    }

    if(numC == numA) {
      wprintf(L"C %lc igual a B valendo %d\n", L'é', numA);
    }
  }

  if (numC < numB && numC < numA)
  {
    wprintf(L"O menor %lc %d\n", L'é', numC);

    if(numA > numB) {
      wprintf(L"O maior %lc %d\n", L'é', numA);
    }
    
    if(numB > numA) {
      wprintf(L"O maior %lc %d\n", L'é', numB);
    }

    if(numA == numB) {
      wprintf(L"C %lc igual a B valendo %d\n", L'é', numB);
    }
  }
  
  return 0;
}