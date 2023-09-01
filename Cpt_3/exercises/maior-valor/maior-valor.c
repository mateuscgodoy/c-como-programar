#include <stdio.h>
#include <math.h>

#define REPETICOES 10

int main(void) {
  int contador = 0;
  float num = 0, maiorNum = -INFINITY;

  while (contador < REPETICOES) {
    printf("Insira um valor: ");
    scanf("%f", &num);

    if (num > maiorNum) maiorNum = num;

    contador++;
  }

  printf("O maior valor inserido foi: %f\n", maiorNum);
}