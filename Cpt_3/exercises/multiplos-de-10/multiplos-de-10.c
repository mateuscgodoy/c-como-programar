#include <stdio.h>

int main(void) {
  int contador = 1;

  printf("N\t10*N\t100*N\t1000*N\n\n");
  while (contador <= 10) {
    printf("%d\t%d\t%d\t%d\n",contador, contador*10, contador*100,contador*1000);
    contador++;
  }
}