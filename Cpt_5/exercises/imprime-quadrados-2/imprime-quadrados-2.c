#include <stdio.h>

void imprimeQuadrado(int tamanho, char caractere);

int main(void) {
  int tamanho = 0;

  printf("Qual tamanho do seu quadrado?\n");
  scanf("%d", &tamanho);

  imprimeQuadrado(tamanho, '+');

  return 0;
}

void imprimeQuadrado(int tamanho, char caractere) {
  int vezes = 1;
  for (int i = 1; i <= tamanho; i++) {
    printf("%c", caractere);

    if (i % tamanho == 0) {
      printf("\n");
      vezes++;
      if (vezes <= tamanho) {
        i = 0;
      }
    }
  }
}