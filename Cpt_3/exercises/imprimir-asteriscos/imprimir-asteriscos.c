#include <stdio.h>

int main(void) {
  int contador = 1;

  while (contador <= 100) {
    printf("*");
    if (contador % 10 == 0) {
      printf("\n");
    }
    contador++;
  }

  return 0;
}