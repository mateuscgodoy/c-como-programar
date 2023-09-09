#include <stdio.h>

#define TAMANHO_LINHA 9

int main(void) {
  int asteriscosPorLinha = 0, metadeDaLinha = 0, tamanho = 0;

  printf("Insira um Tamanho impar entre 1 a 19: ");
  scanf("%d", &tamanho);
  printf("\n");

  for (int i = 1; i <= tamanho; i++) {
    if (i > 1 && i <= (tamanho / 2) + 1) {
      asteriscosPorLinha += 2;
    } else if (i > (tamanho / 2) + 1){
      asteriscosPorLinha -= 2;
    } else {
      asteriscosPorLinha = 1;
    }

    metadeDaLinha = (tamanho - asteriscosPorLinha) / 2;

    for (int j = 1; j <= tamanho; j++) {
      if (j <= metadeDaLinha) {
        printf(" ");
      } else if (j <= metadeDaLinha + asteriscosPorLinha) {
        printf("*");
      }
    }
    printf("\n");
  }

  return 0;
}