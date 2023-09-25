#include <stdio.h>

void mdc(int numA, int numB);

int main(void) {

  mdc(12, 16);
  mdc(25, 75);
  mdc(13, 87);

  return 0;
}

void mdc(int numA, int numB) {
  int min = numA < numB ? numA : numB;

  for(int i = min; i >= 2; i--) {
    if (numA % i == 0 && numB % i == 0) {
      printf("MDC encontrado entre %d e %d foi %d.\n", numA, numB, i);
      return;
    }
  }

  printf("MDC entre %d e %d retornou nulo.\n", numA, numB);
}