#include <stdio.h>

int main(void)
{
  int int1, int2;
  int soma;

  printf("Vamos somar dois numeros inteiros!\n");

  printf("Digite um numero inteiro: ");
  scanf("%d", &int1);
  printf("\n");

  printf("Digite um numero inteiro: ");
  scanf("%d", &int2);
  printf("\n");

  soma  = int1 + int2;

  printf("Soma: %d\n", soma);

  return 0;
}
