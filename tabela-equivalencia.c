#include <stdio.h>

#define TAMANHO_DA_TABELA 256

int main(void) {
  int temp = 0;

  printf("DEC\tBIN\tOCT\tHEX\n");
  printf("=====================================\n");
  for (int i = 1; i <= TAMANHO_DA_TABELA; i++) {
    temp = i;
    printf("%d\t", i);

    // BIN
    while (temp > 0) {
      
    }
    temp = i;

    // OCT
    while (temp > 0) {
      
    }
    temp = i;

    // HEX
    while (temp > 0) {
      
    }
    temp = i;

    printf("\n");
  }

  return 0;
}