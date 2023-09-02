#include <stdio.h>

#define CARACTERES_POR_LINHA 17
#define NUM_DE_LINHAS 8 

int main(void) {
  int contador = 1;

  while (contador <= NUM_DE_LINHAS * CARACTERES_POR_LINHA) {
    if (contador % CARACTERES_POR_LINHA == 0) {
      printf("\n");
    }  else {
      contador % 2 == 0 ?  printf(" ") : printf("*");
    }
    contador++;
  }

  return 0;
}