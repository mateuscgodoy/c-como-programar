#include <stdio.h>

#define CONFIABILIDADE 0.00000001

int main(void) {
  int contador = 1, fatorial = 1;
  float valorAtual = 1, valorPrevio = 0;

  while (valorAtual - valorPrevio > CONFIABILIDADE) {
    valorPrevio = valorAtual;
    fatorial *= contador;
    valorAtual += (float) 1 / fatorial;

    contador++;
  }

  printf("Constante de Euler = %.5f", valorAtual);

  return 0;
}