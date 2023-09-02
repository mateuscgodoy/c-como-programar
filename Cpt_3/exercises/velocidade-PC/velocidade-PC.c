#include <stdio.h>

int main(void) {
  int contador = 1;

  //2 seconds
  while (contador <= 1000000000) {
    contador++;
    if (contador % 100000000 == 0) {
      printf("%d", contador);
    }
  }

  return 0;
}