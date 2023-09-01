#include <stdio.h>

int main(void) {
  int contador = 3;

  printf("A\tA+2\tA+4\tA+6\n");

  while (contador <= 15) {
    printf("%d\t%d\t%d\t%d\n", contador, contador+2, contador+4, contador+6);
    contador += 3;
  }

  return 0;
}