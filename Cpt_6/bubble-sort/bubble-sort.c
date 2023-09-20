#include <stdio.h>

#define TAMANHO 10

int main(void) {
  int a[TAMANHO] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

  int temp = 0, pass = 0, i = 0;

  printf("Ordem de chegada dos items:\n");
  for ( i = 0; i < TAMANHO; i++) {
    printf("%4d", a[i]);
  }

  for ( i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO - 1; j++){
      if (a[j] > a[j + 1]) {
        temp = a[j + 1];
        a[j + 1] = a[j];
        a[j] = temp;
      }
    }
  }

  printf("\n Itens ordenados de forma crescente: \n");

  for ( i = 0; i < TAMANHO; i++) {
    printf("%4d", a[i]);
  }

  printf("\n");
  return 0;
}