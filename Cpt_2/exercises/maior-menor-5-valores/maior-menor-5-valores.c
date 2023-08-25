#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");
  int numA, numB, maior, menor;

  maior = -1;
  menor = -1;

  wprintf(L"Vamos encontrar o maior e menor n%lcmero dentre 5 op%lc%lces.\n", L'ú', L'ç', L'õ');

  wprintf(L"Vamos come%lcar inserindo 2 n%lcmeros inteiros positivos: ", L'ç', L'ú');
  scanf("%d %d", &numA, &numB);
  printf("\n");

  if(numA > numB) {
    maior = numA;
    menor = numB;
  }

  if(numA < numB) {
    maior = numB;
    menor = numA;  
  }

  wprintf(L"Agora insira o terceiro n%lcmero inteiro positivo: ", L'ú');
  scanf("%d", &numA);
  printf("\n");

  if (numA > maior) {
    maior = numA;
  }

  if (numA < menor) {
    menor = numA;
  }

  wprintf(L"O quarto n%lcmero inteiro positivo: ", L'ú');
  scanf("%d", &numA);
  printf("\n");

  if (numA > maior) {
    maior = numA;
  }

  if (numA < menor) {
    menor = numA;
  }

  wprintf(L"E finalmente o quinto n%lcmero inteiro positivo: ", L'ú');
  scanf("%d", &numA);
  printf("\n");

  if (numA > maior) {
    maior = numA;
  }

  if (numA < menor) {
    menor = numA;
  }

  printf("O maior valor foi: %d\nO menor valor foi: %d", maior, menor);

  return 0;
}