#include <stdio.h>

#define CONFIABILIDADE 0.00000001

int main(void) {
  int contador = 1, fatorial = 1, expoente = 1, potencia = 1;
  float valorAtual = 1, valorPrevio = 0;

  printf("Insira o valor do expoente da Constante de Euler: ");
  scanf("%d", &expoente);

  while (valorAtual - valorPrevio > CONFIABILIDADE) {
    valorPrevio = valorAtual;
    fatorial *= contador;
    potencia *= expoente;

    if (fatorial < 0) break;

    valorAtual += (float) potencia / fatorial;
    contador++;
  }

  printf("Resultado = %.5f", valorAtual);

  return 0;
}