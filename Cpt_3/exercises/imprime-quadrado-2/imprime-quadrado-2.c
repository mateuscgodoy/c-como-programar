#include <stdio.h>

#define TAMANHO_MAX 20

int main(void) {
  int tamanho = 0, altura = 0, largura = 0;

  printf("Insira o tamanho do seu quadrado (limite 20): ");
  scanf("%d", &tamanho);

  if(tamanho > TAMANHO_MAX) {
   printf("Tamanho superior ao limite permitido de 20.") ;
   return 0;
  } else {
    altura = tamanho;
    largura = tamanho;
  }

  while (altura > 0) {
    largura = tamanho;
    
    while (largura > 0) {
      if (altura == tamanho || altura == 1) {
        printf("*");
      } else {
        largura == tamanho || largura == 1 ?
        printf("*") :
        printf(" ");
      }

      largura--;
    }

    printf("\n");
    altura--;
  }

  return 0;
}