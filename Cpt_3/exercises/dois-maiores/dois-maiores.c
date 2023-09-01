#include <stdio.h>
#include <math.h>

#define REPETICOES 10

int main(void) {
  float maiorA = -INFINITY, maiorB = -INFINITY, num = 0;
  int contador = 1;

  while (contador <= 10) {
    printf("Insira um valor: ");
    scanf("%f", &num);

    if (num > maiorA) {
      if (maiorA > maiorB) maiorB = maiorA;

      maiorA = num;
    } else if (num > maiorB) {
      maiorB = num;
    }

    contador++;
  }

  printf("Os maiores valores foram: %f e %f\n", maiorA, maiorB);
  return 0;
}