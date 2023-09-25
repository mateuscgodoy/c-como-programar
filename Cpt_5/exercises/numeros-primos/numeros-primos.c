#include <stdio.h>
#include <locale.h>
#include <math.h>

int primo();
int primoQuadrado();

int main(void) {
  setlocale(LC_ALL, "");

  int perfPrimo = 0, perfPrimoQuadrado = 0;

  wprintf(L"Loop de Primo iniciou sua execu%lc%lco\n", L'ç', L'ã'); 
  // for(int i = 1; i <= 10000; i++) {
  //   primo(i, counter);
  // }
  perfPrimo = primo();


  wprintf(L"Primo Quadrado iniciou sua execu%lc%lco\n", L'ç', L'ã'); 
  // for(int i = 1; i <= 10000; i++) {
  //   primoQuadrado(i, counter);
  // }
  perfPrimoQuadrado = primoQuadrado();

  wprintf(L"Primo Quadrado %lc %.3fx mais perfom%lctico que Primo", L'é', (float) perfPrimo / perfPrimoQuadrado, L'á');

  return 0;
}

int primo() {
  int counter = 0;

  for (int j = 1; j <= 10000; j++) {
    for(int i = 2; i < j / 2; i++) {
      counter++;
      if (j % i == 0) {
        //wprintf(L"%d n%lco %lc um n%lcmero primo!\n", number, L'ã', L'é', L'ú');
        continue;
      }
    }
  }

  //wprintf(L"%d %lc um n%lcmero primo!\n", number, L'é', L'ú');
   printf("Primo iterou %d vezes.\n", counter);
   return counter;
}

int primoQuadrado() {
  int counter = 0;

  for (int j = 1; j <= 10000; j++){
    for (int i = 2; i < sqrt(j); i++) {
      counter++;
      if (j % i == 0) {
        //wprintf(L"%d n%lco %lc um n%lcmero primo!\n", number, L'ã', L'é', L'ú');
        continue;
      }
    }
  }
  
  //wprintf(L"%d %lc um n%lcmero primo!\n", number, L'é', L'ú');
  printf("Primo Quadrado iterou %d vezes.\n", counter); 
  return counter;
}