#include <stdio.h>

void separaDigitos(int num);

int main(void) {
  int numA = 0;

  printf("Insira um inteiro (entre 1 e 32767): ");
  scanf("%d", &numA);

  separaDigitos(numA);

  return 0;
}

void separaDigitos(int num) {
  int compare = 1;
  while (num > compare) {
    compare *= 10;
  }

  while (compare> 0) {
    compare /= 10;

    printf(" %d ", num / compare);

    num = num % compare;
  }
}